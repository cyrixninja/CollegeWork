# Implementation of Graph and Searching : Depth First Search

def dfs(graph, start, visited=None):
    if visited is None:
        visited = []
    if start not in visited:
        visited.append(start)
        for neighbour in graph[start]:
            dfs(graph, neighbour, visited)
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
    print("The Depth First Search of the Graph is: ", dfs(graph(), 'A'))


main()