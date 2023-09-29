#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Function to swap two elements in an array
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to find the partition position
int partition(int arr[], int low, int high) {
    int pivot = arr[high];  // Choose the rightmost element as the pivot
    int i = (low - 1);  // Initialize the index of the smaller element

    for (int j = low; j <= high - 1; j++) {
        // If the current element is smaller than or equal to the pivot
        if (arr[j] <= pivot) {
            i++;  // Increment index of the smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// Function to perform insertion sort on the array
void insertionSort(int arr[], int low, int high) {
    for (int i = low + 1; i <= high; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= low && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Function to perform quicksort with a limit on recursion depth
void quickSortWithLimit(int arr[], int low, int high, int depthLimit) {
    while (low < high) {
        // If the number of elements in the partition is less than the depth limit, switch to insertion sort
        if (high - low < depthLimit) {
            insertionSort(arr, low, high);
            break;
        } else {
            // Find pivot element such that element smaller than pivot are on the left, larger on the right
            int pivotIndex = partition(arr, low, high);

            // Recursively sort the elements before and after the pivot
            if (pivotIndex - low < high - pivotIndex) {
                quickSortWithLimit(arr, low, pivotIndex - 1, depthLimit);
                low = pivotIndex + 1;
            } else {
                quickSortWithLimit(arr, pivotIndex + 1, high, depthLimit);
                high = pivotIndex - 1;
            }
        }
    }
}

// Function to calculate the depth limit for introsort
int calculateDepthLimit(int n) {
    int depthLimit = 0;
    while (n > 0) {
        depthLimit++;
        n >>= 1;  // Right shift n by 1 bit (equivalent to dividing by 2)
    }
    return depthLimit * 2;
}

// Function to perform introsort
void introSort(int arr[], int low, int high) {
    int depthLimit = calculateDepthLimit(high - low + 1);
    quickSortWithLimit(arr, low, high, depthLimit);
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[100];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort the array using IntroSort
    introSort(arr, 0, n - 1);

    printf("Sorted array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
