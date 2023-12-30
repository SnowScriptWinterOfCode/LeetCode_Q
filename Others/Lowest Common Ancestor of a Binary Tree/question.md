Given a binary tree, find the lowest common ancestor (LCA) of two given nodes in the tree.

According to the definition of LCA on Wikipedia: “The lowest common ancestor is defined between two nodes p and q as the lowest node in T that has both p and q as descendants (where we allow a node to be a descendant of itself).”
 

Example 1:<br>
![image](https://github.com/Ipshita-Tandon/LeetCode_Q/assets/120296010/d2ce788e-477a-4254-90e0-18cbc3cabd45)

Input: root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 1<br>
Output: 3<br>
Explanation: The LCA of nodes 5 and 1 is 3.

Example 2:<br>
![image](https://github.com/Ipshita-Tandon/LeetCode_Q/assets/120296010/a462bc7c-863f-427b-aff6-a9ec30c68e72)

Input: root = [3,5,1,6,2,0,8,null,null,7,4], p = 5, q = 4<br>
Output: 5<br>
Explanation: The LCA of nodes 5 and 4 is 5, since a node can be a descendant of itself according to the LCA definition.


Example 3:<br>
Input: root = [1,2], p = 1, q = 2<br>
Output: 1
 

Constraints:

1. The number of nodes in the tree is in the range [2, 105].<br>
2. -109 <= Node.val <= 109<br>
3. All Node.val are unique.<br>
4. p != q<br>
5. p and q will exist in the tree.
