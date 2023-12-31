<h2> Populating Next Right Pointers in Each Node </h2>

You are given a perfect binary tree where all leaves are on the same level, and every parent has two children. The binary tree has the following definition:

```
struct Node {
  int val;
  Node *left;
  Node *right;
  Node *next;
}
```

Populate each next pointer to point to its next right node. If there is no next right node, the next pointer should be set to NULL. Initially, all next pointers are set to NULL.


Example 1: <br>
![image](https://github.com/SnowScriptWinterOfCode/LeetCode_Q/assets/120296010/8a5ec120-3224-41cd-95ac-4b63e5320bff)

Input: root = [1,2,3,4,5,6,7]<br>
Output: [1,#,2,3,#,4,5,6,7,#]<br>
Explanation: Given the above perfect binary tree (Figure A), your function should populate each next pointer to point to its next right node, just like in Figure B. The serialized output is in level order as connected by the next pointers, with '#' signifying the end of each level.


Example 2:<br>
Input: root = []<br>
Output: []<br>
 

Constraints:<br>

1. The number of nodes in the tree is in the range [0, 212 - 1].<br>
2. -1000 <= Node.val <= 1000
 

Follow-up:<br>
1. You may only use constant extra space.<br>
2. The recursive approach is fine. You may assume implicit stack space does not count as extra space for this problem.
