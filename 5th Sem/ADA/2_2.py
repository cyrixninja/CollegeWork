# Implmentation and Time Analysis of Binary Search Algorithm

#Importing Time Module for Execution Time Analysis
import time

# Record start time for iterative method
start = time.time()

#Take Number of elements as input from the user
n = int(input("Enter the number of elements: "))

# Take the Elements in the Array from the user
arr = []
for i in range(n):
    arr.append(int(input("Enter the element: ")))

# Binary Search Algorithm (Iterative Method)
def BinarySearch(arr, n, element):
    low = 0
    high = n - 1
    mid = 0

    while low <= high:
        mid = (low + high) // 2

        # If element is greater, ignore left half
        if arr[mid] < element:
            low = mid + 1

        # If element is smaller, ignore right half
        elif arr[mid] > element:
            high = mid - 1

        # element is present at mid
        else:
            return mid

    # If we reach here, then the element was not present
    return -1


# Array Found at Index
print("Element Found at Index: ", BinarySearch(arr, n, int(input("Enter the element to search: "))))

# Record end time iterative method
end = time.time() 

# Print the Execution Time
print("The time of execution of above program using Iterative Method is :",(end-start) * 10**3, "ms")


# Record start time for Recursive method
start = time.time()

#Take Number of elements as input from the user
n = int(input("Enter the number of elements: "))

# Take the Elements in the Array from the user
arr = []
for i in range(n):
    arr.append(int(input("Enter the element: ")))

# Binary Search Algorithm (Recursive Method)
def BinarySearchRecursive(arr, n, element):
    if n >= 1:
        mid = n // 2

        # If element is present at the middle itself
        if arr[mid] == element:
            return mid

        # If element is smaller than mid, then it can only be present in left subarray
        elif arr[mid] > element:
            return BinarySearchRecursive(arr, mid, element)

        # Else the element can only be present in right subarray
        else:
            return mid + BinarySearchRecursive(arr[mid + 1:], n - mid - 1, element)

    # We reach here when the element is not present in the array
    return -1


# Array Found at Index
print("Element Found at Index: ", BinarySearchRecursive(arr, n, int(input("Enter the element to search: "))))

# Record end time Recursive method
end = time.time() 

# Print the Execution Time
print("The time of execution of above program using Recursive Method is :",(end-start) * 10**3, "ms")