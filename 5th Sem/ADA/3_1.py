# Implementation of a knapsack problem using dynamic programming
# 0-1 Knapsack Problem

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

# Function to solve the 0-1 Knapsack Problem
def knapsack(n, values, weights, maxweight):
    dp = [[0 for i in range(maxweight+1)] for j in range(n+1)]

    for i in range(n+1):
        for w in range(maxweight+1):
            if i == 0 or w == 0:
                dp[i][w] = 0
            elif weights[i-1] <= w:
                dp[i][w] = max(values[i-1] + dp[i-1][w-weights[i-1]], dp[i-1][w])
            else:
                dp[i][w] = dp[i-1][w]

    return dp[n][maxweight]

# Printing the Maximum Value of the Knapsack
print("The Maximum Value of the Knapsack is: ", knapsack(n, values, weights, maxweight))
