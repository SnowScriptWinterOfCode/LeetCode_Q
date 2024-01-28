## Python code:
class Solution:
    def convertBST(self, root: Optional[TreeNode]) -> Optional[TreeNode]:        
        stack, summ, node = [], 0, root
        while stack or node:
            while node:
                stack.append(node)
                node = node.right
            node = stack.pop()
            node.val += summ
            summ = node.val
            node = node.left
        return root
## Approach
This C++ code defines a `Solution` class with a method `convertBST` that takes the root of a binary search tree (BST) and returns the same tree modified to be a Greater Tree. The `convertToGT` function recursively traverses the BST in reverse in-order, updating node values to the sum of greater values encountered so far. The final modified tree is returned.
## cpp Code
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
    TreeNode* convertToGT(TreeNode* root,int& sum){
        if(!root)return NULL;
        convertToGT(root->right,sum);
        sum+=root->val;
        root->val=sum;
        convertToGT(root->left,sum);
        return root;
    }
    TreeNode* convertBST(TreeNode* root) {
        int sum=0;
        return convertToGT(root,sum);
    }

};
```
