# Implement LCS problem.

#Importing Time Module for Execution Time Analysis
import time

# Record start time
start = time.time()

def lcs(X, Y):
    x = len(X)
    y = len(Y)
    L = [[0]*(y+1) for i in range(x+1)]
    for i in range(x+1):
        for j in range(y+1):
            if i == 0 or j == 0:
                L[i][j] = 0
            elif X[i-1] == Y[j-1]:
                L[i][j] = L[i-1][j-1] + 1
            else:
                L[i][j] = max(L[i-1][j], L[i][j-1])
    index = L[x][y]
    lcs = [""]*(index+1)
    lcs[index] = ""
    i = x
    j = y
    while i > 0 and j > 0:
        if X[i-1] == Y[j-1]:
            lcs[index-1] = X[i-1]
            i -= 1
            j -= 1
            index -= 1
        elif L[i-1][j] > L[i][j-1]:
            i -= 1
        else:
            j -= 1
    print("LCS of " + X + " and " + Y + " is " + "".join(lcs))

# Test the function
X = "AGGTAB"
Y = "GXTXAYB"
lcs(X, Y)
X = "ABCDGH"
Y = "AEDFHR"
lcs(X, Y)

# record end time
end = time.time()

# Print the Execution Time
print("The time of execution of above program is :",(end-start) * 10**3, "ms")