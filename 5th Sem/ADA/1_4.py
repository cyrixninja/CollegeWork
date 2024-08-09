# Implementation and Time Analysis of Factorial Program using Iterative and Recursive method

#Importing Time Module for Execution Time Analysis
import time

# Iterative Method
# Record start time for iterative method
start = time.time()

# Take Input from the user
num = int(input("Enter the number: "))

# Factorial using Iterative Method
for i in range(1, num):
    num *= i

# Printing the Factorial
print("The Factorial of the number is: ", num)

# Record end time for iterative method
end = time.time()

# Print the Execution Time for iterative method
print("The time of execution of above program using Iterative Method is :",(end-start) * 10**3, "ms")


# Recursive Method
# Record start time for Recursive Method
start = time.time()

# Take Input from the user
num = int(input("Enter the number: "))

# Factorial using Recursive Method
def factorial(n):
    if n == 0:
        return 1
    else:
        return n * factorial(n-1)
    

# Printing the Factorial
print("The Factorial of the number is: ", factorial(num))

# Record end time for Recursive method
end = time.time()

# Print the Execution Time for Recursive method
print("The time of execution of above program using Recursive Method is :",(end-start) * 10**3, "ms")
