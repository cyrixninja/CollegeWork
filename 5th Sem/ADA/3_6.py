# Implement Prim’s algorithm

#Importing Time Module for Execution Time Analysis
import time

# Record start time
start = time.time()

def prims_algorithm(graph):
    n = len(graph)
    mst = [False] * n
    mst[0] = True
    for _ in range(n-1):
        min_edge = float('inf')
        for i in range(n):
            if mst[i]:
                for j in range(n):
                    if not mst[j] and graph[i][j] != 0:
                        if graph[i][j] < min_edge:
                            min_edge = graph[i][j]
                            u = i
                            v = j
        mst[v] = True
        print(f'Edge {u} - {v} with weight {min_edge}')

graph = [[0, 2, 0, 6, 0], [2, 0, 3, 8, 5], [0, 3, 0, 0, 7], [6, 8, 0, 0, 9], [0, 5, 7, 9, 0]]

prims_algorithm(graph)

# record end time
end = time.time()

# Print the Execution Time
print("The time of execution of above program is :",(end-start) * 10**3, "ms")