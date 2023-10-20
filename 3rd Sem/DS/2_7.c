//Implement a program to convert infix notation to postfix notation using stack.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_SIZE 100

// Define a stack structure
struct Stack {
    char items[MAX_SIZE];
    int top;
};

// Initialize the stack
void initialize(struct Stack *s) {
    s->top = -1;
}

// Check if the stack is empty
int isEmpty(struct Stack *s) {
    return (s->top == -1);
}

// Check if the stack is full
int isFull(struct Stack *s) {
    return (s->top == MAX_SIZE - 1);
}

// Push an element onto the stack
void push(struct Stack *s, char item) {
    if (isFull(s)) {
        printf("Stack is full. Cannot push.\n");
    } else {
        s->top++;
        s->items[s->top] = item;
    }
}

// Pop an element from the stack
char pop(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty. Cannot pop.\n");
        return '\0'; // Return a sentinel value
    } else {
        char poppedItem = s->items[s->top];
        s->top--;
        return poppedItem;
    }
}

// Get the precedence of an operator
int getPrecedence(char operator) {
    switch (operator) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return 0; // Default precedence for non-operators
    }
}

// Convert infix expression to postfix notation
void infixToPostfix(char infix[], char postfix[]) {
    struct Stack stack;
    initialize(&stack);

    int i = 0; // Index for reading the input infix expression
    int j = 0; // Index for writing the output postfix expression

    while (infix[i] != '\0') {
        char currentChar = infix[i];

        if (isalnum(currentChar)) {
            // If it's an operand, add it to the output
            postfix[j] = currentChar;
            j++;
        } else if (currentChar == '(') {
            // If it's an opening parenthesis, push it onto the stack
            push(&stack, currentChar);
        } else if (currentChar == ')') {
            // If it's a closing parenthesis, pop and output operators from the stack
            while (!isEmpty(&stack) && stack.items[stack.top] != '(') {
                postfix[j] = pop(&stack);
                j++;
            }
            if (!isEmpty(&stack) && stack.items[stack.top] == '(') {
                pop(&stack); // Pop the opening parenthesis
            } else {
                printf("Error: Mismatched parentheses.\n");
                exit(1);
            }
        } else {
            // If it's an operator, pop and output operators with higher or equal precedence
            while (!isEmpty(&stack) && getPrecedence(currentChar) <= getPrecedence(stack.items[stack.top])) {
                postfix[j] = pop(&stack);
                j++;
            }
            // Push the current operator onto the stack
            push(&stack, currentChar);
        }

        i++;
    }

    // Pop and output any remaining operators from the stack
    while (!isEmpty(&stack)) {
        if (stack.items[stack.top] == '(' || stack.items[stack.top] == ')') {
            printf("Error: Mismatched parentheses.\n");
            exit(1);
        }
        postfix[j] = pop(&stack);
        j++;
    }

    // Null-terminate the postfix expression
    postfix[j] = '\0';
}

int main() {
    char infix[MAX_SIZE];
    char postfix[MAX_SIZE];

    printf("Enter an infix expression: ");
    scanf("%[^\n]", infix);

    infixToPostfix(infix, postfix);
    printf("Postfix notation: %s\n", postfix);

    return 0;
}
