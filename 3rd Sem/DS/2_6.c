//Implement a program for postfix evaluation using stack.
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_SIZE 100

// Define a stack structure
struct Stack {
    int items[MAX_SIZE];
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
void push(struct Stack *s, int item) {
    if (isFull(s)) {
        printf("Stack is full. Cannot push.\n");
    } else {
        s->top++;
        s->items[s->top] = item;
    }
}

// Pop an element from the stack
int pop(struct Stack *s) {
    if (isEmpty(s)) {
        printf("Stack is empty. Cannot pop.\n");
        return -1; // Return a sentinel value
    } else {
        int poppedItem = s->items[s->top];
        s->top--;
        return poppedItem;
    }
}

// Perform the postfix expression evaluation
int evaluatePostfix(char postfix[]) {
    struct Stack stack;
    initialize(&stack);

    for (int i = 0; postfix[i] != '\0'; i++) {
        if (isdigit(postfix[i])) {
            // If it's a digit, push it onto the stack
            push(&stack, postfix[i] - '0');
        } else if (postfix[i] == ' ') {
            // Ignore spaces
            continue;
        } else {
            // If it's an operator, pop the top two operands and apply the operator
            int operand2 = pop(&stack);
            int operand1 = pop(&stack);

            switch (postfix[i]) {
                case '+':
                    push(&stack, operand1 + operand2);
                    break;
                case '-':
                    push(&stack, operand1 - operand2);
                    break;
                case '*':
                    push(&stack, operand1 * operand2);
                    break;
                case '/':
                    if (operand2 == 0) {
                        printf("Error: Division by zero.\n");
                        exit(1);
                    }
                    push(&stack, operand1 / operand2);
                    break;
                default:
                    printf("Invalid character in the expression.\n");
                    exit(1);
            }
        }
    }

    if (!isEmpty(&stack)) {
        return pop(&stack);
    } else {
        printf("Error: Empty stack after evaluation.\n");
        exit(1);
    }
}

int main() {
    char postfix[MAX_SIZE];
    printf("Enter a postfix expression : ");
    scanf("%[^\n]", postfix);

    int result = evaluatePostfix(postfix);
    printf("Result: %d\n", result);

    return 0;
}
