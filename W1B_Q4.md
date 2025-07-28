### Choose a C Project Implementing Dijkstra's Algorithm

* **Repository:** [yusufyilmaz00/Dijkstra-algorithm](https://github.com/yusufyilmaz00/Dijkstra-algorithm)
* This project implements Dijkstra's algorithm in C and provides functions like `getEdgeAndCost()`, `findPath()`, `printPath()`, and `showTable()`. 
* The code includes detailed comments explaining each function's purpose and logic.

---

### Each Function Structue

```markdown
# Dijkstra's Algorithm Implementation - Function Documentation

## `main()`
- **Purpose:** Initializes the graph, inputs edges and costs, and computes the shortest paths.
- **Parameters:** None
- **Returns:** Integer (Exit status)

## `getEdgeAndCost()`
- **Purpose:** Prompts the user to input edges and their corresponding costs.
- **Parameters:** None
- **Returns:** None

## `findPath()`
- **Purpose:** Implements Dijkstra's algorithm to find the shortest paths from the source node to all other nodes.
- **Parameters:**
  - `int count`: Number of nodes
  - `int costs[count][count]`: Cost matrix
  - `int valueParent[count][3]`: Matrix to store total path value, parent node, and exploration status
  - `int startNode`: Index of the source node
- **Returns:** None

## `printPath()`
- **Purpose:** Recursively prints the shortest path from the source node to the destination node.
- **Parameters:**
  - `int valueParent[count][3]`: Matrix containing parent nodes
  - `int startNode`: Index of the source node
  - `int endNode`: Index of the destination node
- **Returns:** None

## `showTable()`
- **Purpose:** Optionally displays a table showing the current state of each node during the algorithm's execution.
- **Parameters:**
  - `int valueParent[count][3]`: Matrix containing node information
  - `int count`: Number of nodes
- **Returns:** None
```

---

