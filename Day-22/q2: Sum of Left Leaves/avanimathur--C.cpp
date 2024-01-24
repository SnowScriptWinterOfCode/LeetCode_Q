#include <bits/stdc++.h>
using namespace std;

struct TreeNode {

    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    
};

class Solution {
public:

    int sumOfLeftLeaves(TreeNode* root) {
        if (!root) {
            return 0;
        }

        int sum = 0;

        if (root->left && !root->left->left && !root->left->right) {
            sum += root->left->val;
        }

        sum += sumOfLeftLeaves(root->left);
        sum += sumOfLeftLeaves(root->right);

        return sum;
    }

};