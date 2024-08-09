# Implmentation and Time Analysis of Linear Search Algorithm

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

# Linear Search Algorithm
def linearSearch(arr, n, x):
    for i in range(n):
        if arr[i] == x:
            return i
    return -1

# Array Found at Index
print("Element Found at Index: ", linearSearch(arr, n, int(input("Enter the element to search: "))))

# Record end time for Recursive method
end = time.time()

# Print the Execution Time
print("The time of execution of above program is :",(end-start) * 10**3, "ms")