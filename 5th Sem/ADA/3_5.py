# Implementation of a Knapsack problem using greedy algorithm
# Fractional Knapsack Problem


#Importing Time Module for Execution Time Analysis
import time

# Record start time
start = time.time()

# Take the N Values from the users
n  = int(input("Enter the Value of N :"))

# Take the Values of the Items from the user
values = []
for i in range(n):
    values.append(int(input("Enter the Value of the Item: ")))

# Take the Weights of the items from the user
weights = []
for i in range(n):
    weights.append(int(input("Enter the Weight of the Item: ")))

# Take the Maximum Weight of the Knapsack from the user
maxweight = int(input("Enter the Maximum Weight of the Knapsack: "))

# Function to solve the Fractional Knapsack Problem
def fractionalKnapsack(n, values, weights, maxweight):
    ratio = []
    for i in range(n):
        ratio.append((values[i]/weights[i], values[i], weights[i]))
    
    ratio.sort(reverse = True)
    ans = 0
    for i in ratio:
        if i[2] <= maxweight:
            ans += i[1]
            maxweight -= i[2]
        else:
            ans += i[0] * maxweight
            break
    return ans


# Printing the Maximum Value of the Knapsack
print("The Maximum Value of the Knapsack is: ", fractionalKnapsack(n, values, weights, maxweight))


# record end time
end = time.time()

# Print the Execution Time
print("The time of execution of above program is :",(end-start) * 10**3, "ms")