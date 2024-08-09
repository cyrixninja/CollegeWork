# Implmentation and Time Analysis of Binary Search Algorithm

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

# Binary Search Algorithm
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
print("Element Found at Indeelement: ", BinarySearch(arr, n, int(input("Enter the element to search: "))))

# Record end time 
end = time.time()

# Print the Eelementecution Time
print("The time of execution of above program is :",(end-start) * 10**3, "ms")