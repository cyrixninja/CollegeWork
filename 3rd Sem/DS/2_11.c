//Write a program to implement following operations on the doubly linked list.
//(a) Insert a node at the front of the linked list.
//(b) Insert a node at the end of the linked list.
//(c) Delete the first node of the linked list.
//(d) Delete a node before specified position.

#include <stdio.h>
#include <stdlib.h>

// Define a structure for a doubly linked list node
struct Node {
    int data;
    struct Node* prev;
    struct Node* next;
};

// Initialize the doubly linked list
struct Node* head = NULL;

// Function to create a new doubly linked list node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
}

// Function to insert a node at the front of the doubly linked list
void insertFront(int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    printf("%d inserted at the front.\n", data);
}

// Function to insert a node at the end of the doubly linked list
void insertEnd(int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
        newNode->prev = current;
    }
    printf("%d inserted at the end.\n", data);
}

// Function to delete the first node of the doubly linked list
void deleteFirst() {
    if (head == NULL) {
        printf("Linked list is empty. Cannot delete.\n");
    } else {
        struct Node* temp = head;
        head = head->next;
        if (head != NULL) {
            head->prev = NULL;
        }
        free(temp);
        printf("First node deleted.\n");
    }
}

// Function to delete a node before a specified position
void deleteBefore(int position) {
    if (position <= 1 || head == NULL || head->next == NULL) {
        printf("Cannot delete before the specified position.\n");
    } else {
        struct Node* current = head;
        for (int i = 1; i < position - 1 && current->next->next != NULL; i++) {
            current = current->next;
        }
        struct Node* temp = current->next;
        current->next = current->next->next;
        if (current->next != NULL) {
            current->next->prev = current;
        }
        free(temp);
        printf("Node deleted before position %d.\n", position);
    }
}

// Function to display the elements of the doubly linked list
void display() {
    struct Node* current = head;
    if (current == NULL) {
        printf("Doubly linked list is empty.\n");
        return;
    }
    printf("Doubly linked list elements: ");
    while (current != NULL) {
        printf("%d <-> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

int main() {
    int choice, data, position;

    while (1) {
        printf("\nDoubly Linked List Operations:\n");
        printf("1. Insert at the Front\n");
        printf("2. Insert at the End\n");
        printf("3. Delete the First Node\n");
        printf("4. Delete a Node Before Position\n");
        printf("5. Display\n");
        printf("6. Quit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert at the front: ");
                scanf("%d", &data);
                insertFront(data);
                break;

            case 2:
                printf("Enter data to insert at the end: ");
                scanf("%d", &data);
                insertEnd(data);
                break;

            case 3:
                deleteFirst();
                break;

            case 4:
                printf("Enter position before which to delete: ");
                scanf("%d", &position);
                deleteBefore(position);
                break;

            case 5:
                display();
                break;

            case 6:
                exit(0);

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
