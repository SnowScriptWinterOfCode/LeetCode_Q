```
class Solution {
public:
    void inorder(TreeNode* root, int mini, int maxi, int &diff) {
        if(root==NULL)
            return;
        
        int tmp = root->val;
        diff = max(diff, max(abs(mini-tmp), abs(maxi-tmp)));
        if(root->val < mini) {
            inorder(root->left, tmp, maxi, diff);
            inorder(root->right, tmp, maxi, diff);
        } 
        else if(root->val > maxi) {
            inorder(root->left, mini, tmp, diff);
            inorder(root->right, mini, tmp, diff);
        } 
        else {
            inorder(root->left, mini, maxi, diff);
            inorder(root->right, mini, maxi, diff);
        }
    }

    int maxAncestorDiff(TreeNode* root) {
        int mini = root->val;
        int maxi = mini;
        int diff = 0;
        inorder(root,mini, maxi, diff);
        return diff;
    }
};
```
