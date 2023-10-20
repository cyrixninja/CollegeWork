//Write a menu driven program to implement following operations on the singly linked list.
//(a) Insert a node at the front of the linked list.
//(b) Insert a node at the end of the linked list.
//(c) Insert a node such that the linked list is in ascending order.(according to info. Field)
//(d) Delete the first node of the linked list.
//(e) Delete a node before specified position.
//(f) Delete a node after specified position.
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL;

void display() {
    struct Node* current = head;
    while (current != NULL) {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}

void insertAtFront(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void insertAtEnd(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL) {
        head = newNode;
    } else {
        struct Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

void insertInAscendingOrder(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    if (head == NULL || data < head->data) {
        newNode->next = head;
        head = newNode;
    } else {
        struct Node* current = head;
        while (current->next != NULL && data > current->next->data) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }
}

void deleteFirstNode() {
    if (head != NULL) {
        struct Node* temp = head;
        head = head->next;
        free(temp);
    }
}

void deleteBeforePosition(int position) {
    if (head == NULL || position <= 1) {
        return;
    }
    if (position == 2) {
        deleteFirstNode();
        return;
    }
    struct Node* current = head;
    for (int i = 1; i < position - 2; i++) {
        if (current->next != NULL) {
            current = current->next;
        } else {
            return;
        }
    }
    if (current->next != NULL) {
        struct Node* temp = current->next;
        current->next = current->next->next;
        free(temp);
    }
}

void deleteAfterPosition(int position) {
    if (head == NULL) {
        return;
    }
    struct Node* current = head;
    for (int i = 1; i < position; i++) {
        if (current == NULL) {
            return;
        }
        current = current->next;
    }
    if (current != NULL && current->next != NULL) {
        struct Node* temp = current->next;
        current->next = current->next->next;
        free(temp);
    }
}

int main() {
    int choice, data, position;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert a node at the front\n");
        printf("2. Insert a node at the end\n");
        printf("3. Insert a node in ascending order\n");
        printf("4. Delete the first node\n");
        printf("5. Delete a node before specified position\n");
        printf("6. Delete a node after specified position\n");
        printf("7. Display the linked list\n");
        printf("8. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data: ");
                scanf("%d", &data);
                insertAtFront(data);
                break;
            case 2:
                printf("Enter data: ");
                scanf("%d", &data);
                insertAtEnd(data);
                break;
            case 3:
                printf("Enter data: ");
                scanf("%d", &data);
                insertInAscendingOrder(data);
                break;
            case 4:
                deleteFirstNode();
                break;
            case 5:
                printf("Enter the position before which to delete: ");
                scanf("%d", &position);
                deleteBeforePosition(position);
                break;
            case 6:
                printf("Enter the position after which to delete: ");
                scanf("%d", &position);
                deleteAfterPosition(position);
                break;
            case 7:
                display();
                break;
            case 8:
                printf("Exiting the program.\n");
                exit(0);
        }
    }

    return 0;
}
