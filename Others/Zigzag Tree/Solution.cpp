// METHOD 1 : Reverse Alternate from Stored BFS
vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

    vector<vector<int>> ans;
    if (root == NULL) return ans;

    deque<TreeNode*> pending;
    pending.push_back(root);

    while (!pending.empty()) {

        vector<int> level;
        int size = pending.size();
        for(int i=0; i<size; i++) {

            TreeNode* front = pending.front();
            pending.pop_front();
            level.push_back(front->val);
            
            if (front->left != NULL) {
                pending.push_back(front->left);
            }

            if (front->right != NULL) {
                pending.push_back(front->right);
            }
        }
        ans.push_back(level);
    }
    for(int i=0; i<ans.size(); i++) {
        if (i%2 != 0) {
            reverse(ans[i].begin(), ans[i].end());
        }
    }
    return ans;
}

// METHOD 2 : BFS and Dequeue
vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

    vector<vector<int>> ans;
    if (root == NULL) return ans;

    deque<TreeNode*> pending;
    pending.push_back(root);

    bool reverse = false;
    int count = 0;

    while (!pending.empty()) {

        vector<int> level;
        int size = pending.size();
        for(int i=0; i<size; i++) {

            if (!reverse) {
                TreeNode* front = pending.front();
                pending.pop_front();
                level.push_back(front->val);
                
                if (front->left != NULL) {
                    pending.push_back(front->left);
                }

                if (front->right != NULL) {
                    pending.push_back(front->right);
                }
            }

            else {
                TreeNode* last = pending.back();
                pending.pop_back();
                level.push_back(last->val);
                
                if (last->right != NULL) {
                    pending.push_front(last->right);
                }

                if (last->left != NULL) {
                    pending.push_front(last->left);
                }
            }
        }
        count ++;
        reverse = !reverse;
        ans.push_back(level);
    }
    return ans;
}
