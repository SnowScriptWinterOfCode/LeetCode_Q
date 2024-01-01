// METHOD 1 : BFS
vector<int> rightSideView(TreeNode* root) {

    vector<int> res;
    if (root == NULL) return res;

    queue<TreeNode*> pending;
    pending.push(root);

    while (!pending.empty()) {

        int size = pending.size();
        TreeNode* front;
        for(int i=0; i<size; i++) {
            front = pending.front();
            pending.pop();

            if (front->left != NULL) {
                pending.push(front->left);
            }

            if (front->right != NULL) {
                pending.push(front->right);
            }
        }
        res.push_back(front->val);
    }
    return res;
}

// METHOD 2 : DFS
void printRightSide(TreeNode* root , vector<int> & ans , int l){
    if(root == NULL){
        return;
    }
    if(l == ans.size()){
        ans.push_back(root->val);
    }
    printRightSide(root->right, ans, l+1);
    printRightSide(root->left, ans , l+1);
}

vector<int> rightSideView(TreeNode* root) {
    vector<int> ans;
    printRightSide(root, ans, 0);
    return ans;
}
