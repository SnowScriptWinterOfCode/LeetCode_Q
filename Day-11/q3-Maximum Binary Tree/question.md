# Maximum Binary Tree

You are given an integer array `nums` with no duplicates. A **maximum binary tree** can be built recursively from `nums` using the following algorithm:

1. Create a root node whose value is the maximum value in `nums`.
2. Recursively build the left subtree on the **subarray prefix** to the **left** of the maximum value.
3. Recursively build the right subtree on the **subarray suffix** to the **right** of the maximum value.

Return the **maximum binary tree** built from `nums`.


### Example 1
![GitHub Logo](https://assets.leetcode.com/uploads/2020/12/24/tree1.jpg)

Input: nums = [3,2,1,6,0,5]

Output: [6,3,5,null,2,0,null,null,1]

### Example 2
![GitHub Logo](https://assets.leetcode.com/uploads/2020/12/24/tree2.jpg)

Input: nums = [3,2,1]

Output: [3,null,2,null,1]

