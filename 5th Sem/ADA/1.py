# Implementation and Time analysis of Sorting Algorithms: Bubble Sort

#Take Number of elements as input from the user
n = int(input("Enter the number of elements: "))

# Take the Elements in the Array from the user
arr = []
for i in range(n):
    arr.append(int(input("Enter the element: ")))

# Taking Flag Variable for Improved Bubble Sort and Checking if Array is already sorted
flag = 0;

# Sorting the Array using Bubble Sort
while(flag == 0):
    flag = 1
    for i in range(n-1):
        if arr[i] > arr[i+1]:
            arr[i], arr[i+1] = arr[i+1], arr[i]
            flag = 0

# Printing the Sorted Array
print("Sorted Array: ", arr)

