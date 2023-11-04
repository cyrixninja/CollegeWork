//Write a program to implement QUEUE using arrays that performs following operations
// (a) INSERT (b) DELETE (c) DISPLAY

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

// Define a structure for the queue
struct Queue {
    int items[MAX_SIZE];
    int front, rear;
};

// Initialize the queue
void initializeQueue(struct Queue *q) {
    q->front = -1;
    q->rear = -1;
}

// Check if the queue is empty
int isEmpty(struct Queue *q) {
    return (q->front == -1 && q->rear == -1);
}

// Check if the queue is full
int isFull(struct Queue *q) {
    return (q->rear == MAX_SIZE - 1);
}

// Insert (enqueue) an element into the queue
void insert(struct Queue *q, int data) {
    if (isFull(q)) {
        printf("Queue is full\n");
    } else {
        if (isEmpty(q)) {
            q->front = q->rear = 0;
        } else {
            q->rear++;
        }
        q->items[q->rear] = data;
        printf("%d inserted into the queue.\n", data);
    }
}

// Delete (dequeue) an element from the queue
void delete(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
    } else {
        int deletedItem = q->items[q->front];
        if (q->front == q->rear) {
            q->front = q->rear = -1;
        } else {
            q->front++;
        }
        printf("%d deleted from the queue.\n", deletedItem);
    }
}

// Display the elements of the queue
void display(struct Queue *q) {
    if (isEmpty(q)) {
        printf("Queue is empty\n");
    } else {
        printf("Queue elements: ");
        for (int i = q->front; i <= q->rear; i++) {
            printf("%d ", q->items[i]);
        }
        printf("\n");
    }
}

int main() {
    struct Queue queue;
    initializeQueue(&queue);
    int choice, data;

    while (1) {
        printf("\nMenu:\n");
        printf("1. INSERT\n");
        printf("2. DELETE\n");
        printf("3. DISPLAY\n");
        printf("4. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                insert(&queue, data);
                break;

            case 2:
                delete(&queue);
                break;

            case 3:
                display(&queue);
                break;

            case 4:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
