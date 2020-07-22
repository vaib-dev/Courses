# Greedy Method


## What is a 'Greedy algorithm'?

A greedy algorithm, as the name suggests, always makes the choice that seems to be the best at that moment. This means that it makes a locally-optimal choice in the hope that this choice will lead to a globally-optimal solution.

![greedy](https://d18l82el6cdm1i.cloudfront.net/uploads/xlck8z42EM-greedy-search-path-example.gif)


## Advantages :

1. It is quite easy to come up with a greedy algorithm (or even multiple greedy algorithms) for a problem.
2. Analyzing the run time for greedy algorithms will generally be much easier than for other techniques (like Divide and conquer). 
3. For the Divide and conquer technique, it is not clear whether the technique is fast or slow. This is because at each level of recursion the size of gets smaller and the number of sub-problems increases.
## Disadvantages :
1. The difficult part is that for greedy algorithms you have to work much harder to understand correctness issues. Even with the correct algorithm, it is hard to prove why it is correct. 
2. Proving that a greedy algorithm is correct is more of an art than a science. It involves a lot of creativity.

## Where to use Greedy algorithms?

A problem must comprise these two components for a greedy algorithm to work:

It has optimal substructures. The optimal solution for the problem contains optimal solutions to the sub-problems.

It has a greedy property (hard to prove its correctness!). If you make a choice that seems the best at the moment and solve the remaining sub-problems later, you still reach an optimal solution. You will never have to reconsider your earlier choices.

## Examples

The greedy method is quite powerful and works well for a wide range of problems. Many algorithms can be viewed as applications of the Greedy algorithms, such as (includes but is not limited to):

1. Kruskal's Algorithm
2. Prim's Algorithm
2. Dijkstra’s algorithm for shortest paths from a single source