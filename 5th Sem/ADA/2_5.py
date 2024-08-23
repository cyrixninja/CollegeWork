# Implmentation and Time Analysis of Max-Heap Sort

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

# Max-Heap Sort Algorithm
def heapify(arr, n, i):
    largest = i
    l = 2 * i + 1
    r = 2 * i + 2

    if l < n and arr[i] < arr[l]:
        largest = l

    if r < n and arr[largest] < arr[r]:
        largest = r

    if largest != i:
        arr[i], arr[largest] = arr[largest], arr[i]

        heapify(arr, n, largest)

def heapSort(arr):
    n = len(arr)

    for i in range(n//2 - 1, -1, -1):
        heapify(arr, n, i)

    for i in range(n-1, 0, -1):
        arr[i], arr[0] = arr[0], arr[i]
        heapify(arr, i, 0)

heapSort(arr)

# Printing the Sorted Array
print("Sorted Array: ", arr)

# record end time
end = time.time()

# Print the Execution Time
print("The time of execution of above program is :",(end-start) * 10**3, "ms")