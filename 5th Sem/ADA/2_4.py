# Implmentation and Time Analysis of Quick Sort

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

# Printing the Sorted Array
print("Sorted Array: ", arr)

# record end time
end = time.time()

# Print the Execution Time
print("The time of execution of above program is :",(end-start) * 10**3, "ms")