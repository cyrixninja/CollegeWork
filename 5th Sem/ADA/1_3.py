# Implementation and Time analysis of Sorting Algorithms: Insertion Sort

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

# Sorting the Array using Insertion Sort
for i in range(1, n):
    key = arr[i]
    j = i - 1
    while j >= 0 and key < arr[j]:
        arr[j + 1] = arr[j]
        j -= 1
    arr[j + 1] = key

# Printing the Sorted Array
print("The Sorted Array is: ", arr)

# Record end time
end = time.time()

# Print the Execution Time
print("The time of execution of above program is :",(end-start) * 10**3, "ms")