//Write a program to implement following operations on the circular linked list.
// (a) Insert a node at the front of the linked list.
// (b) Insert a node at the end of the linked list.
// (c) Delete the first node of the linked list.
// (d) Delete a node before specified position.

#include <stdio.h>
#include <stdlib.h>

// Define a structure for a circular linked list node
struct Node {
    int data;
    struct Node* next;
};

// Initialize the circular linked list
struct Node* head = NULL;

// Function to create a new circular linked list node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = newNode; // Initialize the 'next' pointer to itself
    return newNode;
}

// Function to insert a node at the front of the circular linked list
void insertFront(int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
    } else {
        newNode->next = head;
        struct Node* current = head;
        while (current->next != head) {
            current = current->next;
        }
        current->next = newNode;
        head = newNode;
    }
    printf("%d inserted at the front.\n", data);
}

// Function to insert a node at the end of the circular linked list
void insertEnd(int data) {
    struct Node* newNode = createNode(data);
    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* current = head;
        while (current->next != head) {
            current = current->next;
        }
        current->next = newNode;
        newNode->next = head;
    }
    printf("%d inserted at the end.\n", data);
}

// Function to delete the first node of the circular linked list
void deleteFirst() {
    if (head == NULL) {
        printf("Circular linked list is empty\n");
    } else if (head->next == head) {
        free(head);
        head = NULL;
        printf("First node deleted. Circular linked list is now empty.\n");
    } else {
        struct Node* current = head;
        while (current->next != head) {
            current = current->next;
        }
        struct Node* temp = head;
        head = head->next;
        current->next = head;
        free(temp);
        printf("First node deleted.\n");
    }
}

// Function to delete a node before a specified position
void deleteBefore(int position) {
    if (position <= 1 || head == NULL) {
        printf("Cannot delete before the specified position.\n");
    } else {
        struct Node* current = head;
        struct Node* prev = NULL;
        int count = 1;
        while (count < position - 1) {
            prev = current;
            current = current->next;
            count++;
            if (current == head) {
                printf("Position not found .\n");
                return;
            }
        }
        if (prev == NULL) {
            prev = head;
            while (prev->next != head) {
                prev = prev->next;
            }
            head = head->next;
            prev->next = head;
        } else {
            prev->next = current->next;
        }
        free(current);
        printf("Node deleted before position %d.\n", position);
    }
}

// Function to display the elements of the circular linked list
void display() {
    if (head == NULL) {
        printf("Circular linked list is empty.\n");
        return;
    }
    printf("Circular linked list elements: ");
    struct Node* current = head;
    do {
        printf("%d -> ", current->data);
        current = current->next;
    } while (current != head);
    printf("...\n");
}

int main() {
    int choice, data, position;

    while (1) {
        printf("\n Menu : \n");
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
                printf("Invalid choice.\n");
        }
    }

    return 0;
}
