class Solution {
public:
//serves 2 purpose, one is to mark parents and other is to find node corresp to target
        TreeNode* markparents(TreeNode* root, unordered_map<TreeNode*, TreeNode*>&parent, int target){
            queue<TreeNode* >  q;
            q.push(root);
            while(!q.empty()){
                TreeNode* curr = q.front();
                q.pop();
                if(curr->left){
                    parent[curr->left] = curr ;
                    q.push(curr->left);
                }
                if(curr->right){
                    parent[curr->right] = curr ;
                    q.push(curr->right);
                }
                if(curr->val == target ) return curr;
            }
            // Add a return statement in case the target is not found (or handle it appropriately)
            return nullptr;
        }
    int amountOfTime(TreeNode* root, int target) {
         unordered_map<TreeNode*, TreeNode*>parent;
        TreeNode* start = markparents(root, parent, target);

        unordered_map<TreeNode*, bool>vis;
        queue<TreeNode*>q;

        q.push(start);
        vis[start] = true ;
        int time = 0 ;
        
        while(!q.empty()){
            int size = q.size();
            int fl = 0 ;
            
            for(int i = 0 ; i < size ; i ++){ //vis all left right parent of a node together
                TreeNode* curr = q.front();
                q.pop();
                if(curr->left && !vis[curr->left]){
                    q.push(curr->left);
                    vis[curr->left] = true;
                    fl=1;
                }
                if(curr->right && !vis[curr->right]){
                    q.push(curr->right);
                    vis[curr->right] = true;
                    fl=1;
                }
                if(parent[curr] && !vis[parent[curr]]){
                    q.push(parent[curr]);
                    vis[parent[curr]] = true;
                    fl=1;
                }
            }
            if(fl) time++;
        }

        return time;
    }
};
