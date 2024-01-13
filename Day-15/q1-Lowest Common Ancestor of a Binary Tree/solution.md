# Lowest Common Ancestor for two given Nodes

## Solution

### Intuition

The LCA can be found in either the left subtree or the right subtree. If not in both subtrees, then the root itself is the LCA.

### Approach

1. If root is null or if it is equal to either x or y, return root.
2. Make recursive calls for both left and right subtrees.
3. If the left subtree call returns null, return the result from the right subtree.
4. If the right subtree call returns null, return the result from the left subtree.
5. If both left and right calls return values (not null), return the root as the LCA.

![image](https://github.com/SonaVarshney/LeetCode_Q/assets/99477385/7294eaba-c1e3-4d00-856c-478ade7c31aa)

### C++ Code

```cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // Base case
        if (root == NULL || root == p || root == q) {
            return root;
        }
        
        // Recursive calls for left and right subtrees
        TreeNode* left = lowestCommonAncestor(root->left, p, q);
        TreeNode* right = lowestCommonAncestor(root->right, p, q);

        // Determine the result based on recursive calls
        if (left == NULL) {
            return right;
        } else if (right == NULL) {
            return left;
        } else {
            // Both left and right are not null, we found our result
            return root;
        }
    }
};


