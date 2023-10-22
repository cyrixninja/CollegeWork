#include <stdio.h>
#include <stdlib.h>

// Define the structure for a binary tree node
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

// Function to create a new binary tree node
struct Node* createNode(int value) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a new node into the binary tree
struct Node* insert(struct Node* root, int value) {
    if (root == NULL) {
        return createNode(value);
    }

    if (value < root->data) {
        root->left = insert(root->left, value);
    } else if (value > root->data) {
        root->right = insert(root->right, value);
    }

    return root;
}


// Preorder Traversal
void preorder(struct Node* root) {
    struct Node* stack[100]; 
    int top = -1;
    if (root == NULL) return;

    stack[++top] = root;

    while (top >= 0) {
        struct Node* current = stack[top--];
        printf("%d ", current->data);

        if (current->right) stack[++top] = current->right;
        if (current->left) stack[++top] = current->left;
    }
}


// Postorder Traversal
void postorder(struct Node* root) {
    if (root == NULL) return;
    
    struct Node* stack1[100];
    struct Node* stack2[100];
    int top1 = -1;
    int top2 = -1;
    stack1[++top1] = root;

    while (top1 >= 0) {
        struct Node* current = stack1[top1--];
        stack2[++top2] = current;

        if (current->left) stack1[++top1] = current->left;
        if (current->right) stack1[++top1] = current->right;
    }

    while (top2 >= 0) {
        printf("%d ", stack2[top2--]->data);
    }
}

// Inorder Traversal
void inorder(struct Node* root) {
    struct Node* stack[100]; 
    int top = -1;
    struct Node* current = root;

    while (1) {
        while (current != NULL) {
            stack[++top] = current;
            current = current->left;
        }

        if (top == -1) break;

        current = stack[top--];
        printf("%d ", current->data);
        current = current->right;
    }
}


int main() {
    struct Node* root = NULL;
    int value;
    char choice;

    do {
        printf("Enter a value to insert into the binary tree: ");
        scanf("%d", &value);
        root = insert(root, value);

        printf("Do you want to insert another node? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    printf("Inorder Traversal: ");
    inorder(root);
    printf("\n");

    printf("Preorder Traversal: ");
    preorder(root);
    printf("\n");

    printf("Postorder Traversal: ");
    postorder(root);
    printf("\n");


    return 0;
}

