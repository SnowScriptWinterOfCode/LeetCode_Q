# City Travel Distance

Imagine you are a professional programmer working on a project to optimize the travel distance between cities. You need to find the <b>maximum sum of distances you can travel without visiting consecutive cities.</b>

Given an array <b>'distances'</b> representing the distances between cities, implement a function that returns the <i> maximum sum of distances you can travel <b>without going to consecutive cities.</b></i>

<br>

## Example 1:

**Input:** distance = [1,2,3,1]

**Output:** 4

**Explanation:** Visit City 1 (distance = 1) and then City 3 (distance = 3).
                 
Total distance you can travel = 1 + 3 = 4.

## Example 2:

**Input:** distance = [2,7,9,3,1]

**Output:** 12

**Explanation:** Visit City 1 (distance = 2), visit City 3 (distance = 9) and then City 5 (distance = 1).

Total distance you can travel = 2 + 9 + 1 = 12.

<br>

## Constraints:

1 <= distance.length <= 100
0 <= distance[i] <= 400