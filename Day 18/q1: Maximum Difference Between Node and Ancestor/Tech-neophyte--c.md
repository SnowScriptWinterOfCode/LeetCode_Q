## Approach:
<br /> 1. Using dfs find the max value node and min value node in each branch and calculate their diffence.
<br /> 2. Return the max difference. 
## Code:
```
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxAncestorDiff(TreeNode* root) {
       return dfs(root,root->val,root->val);
    }
    int dfs(TreeNode* root,int mini,int maxx){
        if (root==NULL){
            return maxx-mini;
        }
        mini = std::min(mini, root->val);
        maxx = std::max(maxx, root->val);
        int left_diff = dfs(root->left, mini, maxx);
        int right_diff = dfs(root->right, mini, maxx);
        return std::max(left_diff, right_diff);
    }
};
```
