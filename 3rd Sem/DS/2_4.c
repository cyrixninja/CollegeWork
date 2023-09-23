// Write a program to implement Merge Sort.
#include <stdio.h>

// Function to merge two subarrays of arr[].
// First subarray is arr[l..mid]
// Second subarray is arr[mid+1..r]
void merge(int arr[], int l, int mid, int r) {
    int i, j, k;
    int n1 = mid - l + 1;
    int n2 = r - mid;

    // Create temporary arrays
    int L[n1], R[n2];

    // Copy data to temporary arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge the temporary arrays back into arr[l..r]
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Recursive function to perform merge sort on arr[l..r]
void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        // Find the middle point
        int mid = l + (r - l) / 2;

        // Sort first and second halves
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        // Merge the sorted halves
        merge(arr, l, mid, r);
    }
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Perform Merge Sort
    mergeSort(arr, 0, n - 1);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
