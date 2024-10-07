# Implement Kruskal’s algorithm.
#Importing Time Module for Execution Time Analysis
import time

# Record start time
start = time.time()

def kruskal_algorithm(graph):
    n = len(graph)
    edges = []
    for i in range(n):
        for j in range(n):
            if graph[i][j] != 0:
                edges.append((graph[i][j], i, j))
    edges.sort()
    parent = [i for i in range(n)]
    def find_parent(node):
        if parent[node] == node:
            return node
        return find_parent(parent[node])
    def union(u, v):
        parent_u = find_parent(u)
        parent_v = find_parent(v)
        parent[parent_v] = parent_u
    mst = []
    for edge in edges:
        weight, u, v = edge
        if find_parent(u) != find_parent(v):
            union(u, v)
            mst.append(edge)
    for edge in mst:
        weight, u, v = edge
        print(f'Edge {u} - {v} with weight {weight}')


graph = [[0, 2, 0, 6, 0], [2, 0, 3, 8, 5], [0, 3, 0, 0, 7], [6, 8, 0, 0, 9], [0, 5, 7, 9, 0]]

kruskal_algorithm(graph)

# record end time
end = time.time()

# Print the Execution Time
print("The time of execution of above program is :",(end-start) * 10**3, "ms")