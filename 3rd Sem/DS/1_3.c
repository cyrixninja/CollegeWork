// Perform Following operations on matrix.
// ● Addition
// ● Subtraction
// ● Multiplication

#include <stdio.h>

int main() {
    int row, col;
    
    // Define the dimensions of the matrices
    int rows, cols;
    
    printf("Enter the number of rows and columns for matrices A and B: ");
    scanf("%d %d", &rows, &cols);
    
    // Define the matrices A and B
    int A[rows][cols];
    int B[rows][cols];
    
    // Input values for matrix A
    printf("Enter values for matrix A:\n");
    for (row = 0; row < rows; row++) {
        for (col = 0; col < cols; col++) {
            scanf("%d", &A[row][col]);
        }
    }
    
    // Input values for matrix B
    printf("Enter values for matrix B:\n");
    for (row = 0; row < rows; row++) {
        for (col = 0; col < cols; col++) {
            scanf("%d", &B[row][col]);
        }
    }
    
    // Initialize a result matrix C for addition, subtraction, and multiplication
    int C[rows][cols];
    
    // Perform matrix addition
    printf("Matrix Addition :\n");
    for (row = 0; row < rows; row++) {
        for (col = 0; col < cols; col++) {
            C[row][col] = A[row][col] + B[row][col];
            printf("%d ", C[row][col]);
        }
        printf("\n");
    }
    
    // Perform matrix subtraction
    printf("Matrix Subtraction :\n");
    for (row = 0; row < rows; row++) {
        for (col = 0; col < cols; col++) {
            C[row][col] = A[row][col] - B[row][col];
            printf("%d ", C[row][col]);
        }
        printf("\n");
    }

    // Perform matrix multiplication
    printf("Matrix Multiplication :\n");
    for (row = 0; row < rows; row++) {
        for (col = 0; col < cols; col++) {
            C[row][col] = 0; // Initialize the element in C to 0
            for (int k = 0; k < cols; k++) {
                C[row][col] += A[row][k] * B[k][col];
            }
            printf("%d ", C[row][col]);
        }
        printf("\n");
    }
    
    return 0;
}
