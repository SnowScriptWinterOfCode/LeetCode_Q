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
     void solve(TreeNode*root,int &sum,int &flag){
        if(root==NULL)return ;
        if(root->left==NULL && root->right==NULL &&flag==1){
            sum+=root->val;
        }
        flag=1;
        solve(root->left,sum,flag);
        flag=0;
        solve(root->right,sum,flag);

    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
         int sum=0;
        int flag=0;
        solve(root,sum,flag);
        return sum;
    }
};