# Implementation and Time Analysis of Quick Sort

#Importing Time Module for Execution Time Analysis
import time

# Record start time
start = time.time()

#Take Number of elements as input from the user
n = int(input("Enter the number of elements: "))

# Take the Elements in the Array from the user
arr = []
for i in range(n):
    arr.append(int(input("Enter the element: ")))

# Quick Sort Algorithm
def partition(arr, low, high):
    i = low - 1
    pivot = arr[high]

    for j in range(low, high):
        if arr[j] < pivot:
            i += 1
            arr[i], arr[j] = arr[j], arr[i]

    arr[i+1], arr[high] = arr[high], arr[i+1]

    return i+1

def quickSort(arr, low, high):
    if low < high:
        pi = partition(arr, low, high)

        quickSort(arr, low, pi-1)
        quickSort(arr, pi+1, high)
        
quickSort(arr, 0, n-1)
# Printing the Sorted Array
print("Sorted Array: ", arr)

# record end time
end = time.time()

# Print the Execution Time
print("The time of execution of above program is :",(end-start) * 10**3, "ms")