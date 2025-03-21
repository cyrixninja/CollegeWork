#Implementation of making a change problem using dynamic programming

#Importing Time Module for Execution Time Analysis
import time

# Record start time
start = time.time()


def making_change(coins, amount):
    n = len(coins)
    dp = [0] + [float('inf')]*amount
    for i in range(1, amount+1):
        for j in range(n):
            if coins[j] <= i:
                dp[i] = min(dp[i], dp[i-coins[j]]+1)
    return dp[amount] if dp[amount] != float('inf') else -1

# Test the function
coins = [1, 2, 5]
amount = 6
print("Amout of Coins Required : " +  str(making_change(coins, amount)))

coins1 = [1, 2 , 5]
amount1 = 8
print("Amout of Coins Required : " +  str(making_change(coins1, amount1)))

# record end time
end = time.time()

# Print the Execution Time
print("The time of execution of above program is :",(end-start) * 10**3, "ms")