You are given the `root` of a binary search tree (BST) and an integer `val`.

Find the node in the BST that the node's value equals `val` and return the subtree rooted with that node. If such a node does not exist, return `null`.

 

**_Example 1:_**

![image](https://github.com/SnowScriptWinterOfCode/LeetCode_Q/assets/112773734/ebe5db1c-7598-4198-b906-33c160132e8f)

**Input:** root = [4,2,7,1,3], val = 2
**Output:** [2,1,3]

**_Example 2:_**

![image](https://github.com/SnowScriptWinterOfCode/LeetCode_Q/assets/112773734/e6d0daba-15a5-4aab-9119-3abcf11ea381)

**Input:** root = [4,2,7,1,3], val = 5
**Output:** []
 

 **Definition for a binary tree node.**
```
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
```
`Problem link`: [https://leetcode.com/problems/search-in-a-binary-search-tree/](url)
