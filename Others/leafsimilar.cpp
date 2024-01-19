// struct TreeNode {
//     int val;
//     TreeNode* left;
//     TreeNode* right;
//     TreeNode() : val(0), left(nullptr), right(nullptr) {}
//     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
//     TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
// };

class Solution {
public:
    void solve1(TreeNode* root1, vector<int>& ans1) {
        if (root1 == nullptr) {
            return;
        }

        if (root1->left == nullptr && root1->right == nullptr) {
            ans1.push_back(root1->val);
        }

        solve1(root1->left, ans1);
        solve1(root1->right, ans1);
    }

     void solve2(TreeNode* root2, vector<int>& ans2) {
        if (root2 == nullptr) {
            return;
        }

        if (root2->left == nullptr && root2->right == nullptr) {
            ans2.push_back(root2->val);
        }

        solve1(root2->left, ans2);
        solve1(root2->right, ans2);
    }

    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> ans1, ans2;
        solve1(root1, ans1);
        solve2(root2, ans2);

        if (ans1.size() != ans2.size()) {
            return false;
        }

        for (int i = 0; i < ans1.size(); ++i) {
            if (ans1[i] != ans2[i]) {
                return false;
            }
        }

        return true;
    }
};
