# Implmentation and Time Analysis of Merge Sort

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

# Merge Sort Algorithm
def mergesort(arr):
    if len(arr) > 1:
        mid = len(arr) // 2
        L = arr[:mid]
        R = arr[mid:]

        mergesort(L)
        mergesort(R)

        i = j = k = 0

        while i < len(L) and j < len(R):
            if L[i] < R[j]:
                arr[k] = L[i]
                i += 1
            else:
                arr[k] = R[j]
                j += 1
            k += 1

        while i < len(L):
            arr[k] = L[i]
            i += 1
            k += 1

        while j < len(R):
            arr[k] = R[j]
            j += 1
            k += 1
    return arr

# Printing the Sorted Array
print("Sorted Array: ", mergesort(arr))

# record end time
end = time.time()

# Print the Execution Time
print("The time of execution of above program is :",(end-start) * 10**3, "ms")