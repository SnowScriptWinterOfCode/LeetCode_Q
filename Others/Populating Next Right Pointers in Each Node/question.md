You are given a perfect binary tree where all leaves are on the same level, and every parent has two children. The binary tree has the following definition:

struct Node {<br>
int val;<br>
Node *left;<br>
Node *right;<br>
Node *next;<br>
}

Populate each next pointer to point to its next right node. If there is no next right node, the next pointer should be set to NULL. Initially, all next pointers are set to NULL.

Example 1:<br>
![image](https://github.com/Ipshita-Tandon/LeetCode_Q/assets/120296010/26930c99-e45a-465a-a2f3-fd429251c620)

Input: root = [1,2,3,4,5,6,7]<br>
Output: [1,#,2,3,#,4,5,6,7,#]<br>
Explanation: Given the above perfect binary tree (Figure A), your function should populate each next pointer to point to its next right node, just like in Figure B. The serialized output is in level order as connected by the next pointers, with '#' signifying the end of each level.

Example 2:<br>
Input: root = []<br>
Output: []

Constraints:<br>
1. The number of nodes in the tree is in the range [0, 212 - 1].<br>
2. -1000 <= Node.val <= 1000<br>

Follow-up:<br>
1. You may only use constant extra space.<br>
2. The recursive approach is fine. You may assume implicit stack space does not count as extra space for this problem.
