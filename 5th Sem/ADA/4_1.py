# Implementation of Graph and Searching : Breadth First Search
#Importing Time Module for Execution Time Analysis
import time

# Record start time
start = time.time()

def bfs(graph, start):
    visited = []
    queue = [start]
    while queue:
        node = queue.pop(0)
        if node not in visited:
            visited.append(node)
            neighbours = graph[node]
            for neighbour in neighbours:
                queue.append(neighbour)
    return visited


def graph():
    graph = {
        'A': ['B', 'C'],
        'B': ['D', 'E'],
        'C': ['F'],
        'D': [],
        'E': ['F'],
        'F': []
    }
    return graph


def main():
    print("The Breadth First Search of the Graph is: ", bfs(graph(), 'A'))


main()

# record end time
end = time.time()

# Print the Execution Time
print("The time of execution of above program is :",(end-start) * 10**3, "ms")