// Write a program to implement Binary Search.
#include <stdio.h>

int binarySearch(int arr[], int l, int r, int a) {
    while (l <= r) {
        int mid = l + (r - l) / 2; 

        if (arr[mid] == a) {
            return mid; 
        } else if (arr[mid] < a) {
            l = mid + 1; 
        } else {
            r = mid - 1; 
        }
    }

    return -1; 
}

int main() {
    int size, a;
    
    printf("Enter the size of the sorted array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the sorted array in ascending order:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the a element to search for: ");
    scanf("%d", &a);

    int result = binarySearch(arr, 0, size - 1, a);

    if (result != -1) {
        printf("Element %d found at index %d\n", a, result);
    } else {
        printf("Element %d not found in the array\n", a);
    }

    return 0;
}
