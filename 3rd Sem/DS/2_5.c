//Implement a program for stack that performs following
//operations using array.
//(a) PUSH (b) POP (c) PEEP (d) CHANGE (e) DISPLAY
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Initialize the stack and top index
int stack[MAX_SIZE];
int top = -1;

// Check if the stack is empty
int isEmpty() {
    return (top == -1);
}

// Check if the stack is full
int isFull() {
    return (top == MAX_SIZE - 1);
}

// Push an element onto the stack
void push(int item) {
    if (isFull()) {
        printf("Stackoverflow\n");
    } else {
        top++;
        stack[top] = item;
        printf("%d pushed onto the stack.\n", item);
    }
}

// Pop an element from the stack
int pop() {
    if (isEmpty()) {
        printf("Stackunderflow\n");
        return -1; // Return a sentinel value
    } else {
        int poppedItem = stack[top];
        top--;
        return poppedItem;
    }
}

// Peek at the top element of the stack
int peek() {
    if (isEmpty()) {
        printf("Stack is empty. Cannot peek.\n");
        return -1; // Return a sentinel value
    } else {
        return stack[top];
    }
}

// Change the top element of the stack
void change(int newItem) {
    if (isEmpty()) {
        printf("Stack is empty. Cannot change.\n");
    } else {
        stack[top] = newItem;
        printf("Top element changed to %d.\n", newItem);
    }
}

// Display the elements of the stack
void display() {
    if (isEmpty()) {
        printf("Stack is empty. Nothing to display.\n");
    } else {
        printf("Stack contents: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    int choice, item;

    while (1) {
        printf("\nStack Operations:\n");
        printf("1. PUSH\n");
        printf("2. POP\n");
        printf("3. PEEP\n");
        printf("4. CHANGE\n");
        printf("5. DISPLAY\n");
        printf("6. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter an element to push: ");
                scanf("%d", &item);
                push(item);
                break;

            case 2:
                item = pop();
                if (item != -1) {
                    printf("Popped item: %d\n", item);
                }
                break;

            case 3:
                item = peek();
                if (item != -1) {
                    printf("Top element: %d\n", item);
                }
                break;

            case 4:
                printf("Enter a new item to change the top element: ");
                scanf("%d", &item);
                change(item);
                break;

            case 5:
                display();
                break;

            case 6:
                exit(0);

            default:
                printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}