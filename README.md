# Weighted-Maze-Runner
Maze game is a well-known problem, where we are given a grid of 0’s and 1’s, 0’s
corresponds to a place that can be traversed, and 1 corresponds to a place that cannot be
traversed (i.e. a wall or barrier); the problem is to find a path from bottom left corner of grid to
top right corner; immediate right, immediate left, immediate up and immediate down only are
possible (no diagonal moves). We consider a variant of the maze problem where a cost
(positive value) or profit (negative value) is attached to visiting each location in the maze,
and the problem is to find a path of least cost through the maze.
You may solve the problem after imposing/relaxing other restrictions on the above problem
on
● Values of cost/profit (but not same cost/profit for all traversable cells in the grid)
● Moves possible (but you cannot trivialize the problem by making the grid linear or
partly linear in any way)
● No. of destinations possible
Choose the most efficient algorithm possible for your specific case.

Hints: Convert the maze to a weighted graph G (V, E). Each location (i, j) in the maze
corresponds to a node in the graph. The problem can have multiple solutions. Students can
use any design technique such as greedy method, backtracking, dynamic programming.
Students can choose their own conditions, positive or negative costs for the graph.

Relaxations:-
• Only immediate UP and Immediate Right
• Traverses from bottom left to top right
Algorithms used:-
• Greedy Algorithm
• Dynamic Programming
Inputs required :-
• Row and Column Dimensions
• Value Matrix
• Maze Matrix
Output:-
• Minimum cost of the possible paths
