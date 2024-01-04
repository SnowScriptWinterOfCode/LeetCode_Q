Detonate the Maximum Bombs
You are given a list of bombs. The range of a bomb is defined as the area where its effect can be felt. This area is in the shape of a circle with the center as the location of the bomb.

The bombs are represented by a 0-indexed 2D integer array bombs where bombs[i] = [xi, yi, ri]. xi and yi denote the X-coordinate and Y-coordinate of the location of the ith bomb, whereas ri denotes the radius of its range.

You may choose to detonate a single bomb. When a bomb is detonated, it will detonate all bombs that lie in its range. These bombs will further detonate the bombs that lie in their ranges.

Task: Given the list of bombs, return the maximum number of bombs that can be detonated if you are allowed to detonate only one bomb.

Example 1
bombs = [[2,1,3], [6,1,4]]
Output : 2

Example 2
bombs = [[1,1,5],[10,10,5]]
Output : 1

Example 3
bombs = [[1,2,3],[2,3,1],[3,4,2],[4,5,3],[5,6,4]]
Output : 5