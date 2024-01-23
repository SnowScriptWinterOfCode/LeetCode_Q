### Approach 1: Recursive DFS

We can solve this problem  using simple DFS traversal technique while keeping track of whether the current node is a left child or not.

- We start at `root` node. A boolean parameter `isLeft` is initialized to false denoting that root node is not left child.
- Recursively explore the left child nodes by setting the `isLeft=true` and right child nodes by setting `isLeft=false`.
- If the current node is a leaf node and `isLeft=true`, we return the node's value. Otherwise, we return `0`.

### Complexity Analysis
`Time Complexity`: O(N), where N is the number of nodes in the given binary tree. 
It is a standard DFS traversal technique where each node is visited once.

`Space Complexity`: O(H), where H is the height of the given binary tree. 
It is required for implicit recursive stack space. 
H = logN in the case of a complete binary tree and H=N in the case of a skewed tree.

### C++ Code
```
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        return dfs(root, false);
    }
    int dfs(TreeNode* root, bool isLeft) {
        if(!root) return 0;
        if(!root -> left && !root -> right) return isLeft ? root -> val : 0;
        return dfs(root -> left, true) + dfs(root -> right, false);
    }
};
```
###  Approach 2: BFS

Another way to solve this problem is using BFS traversal technique and keeping track of whether the current node is left child.

- We start at `root` node and push it along with the `isLeft` parameter set to false into a queue.
- Iteratively pop the front nodes from the queue. If it is a leaf node, add to the final sum if the corresponding `isLeft` parameter is true.
- Iteratively push the left and right child nodes into the queue till it becomes empty.

### Complexity Analysis

`Time Complexity`: O(N)

`Space Complexity`: O(W), where W is the maximum width of the tree. 
In the case of a complete binary tree, the maximum number of nodes stored in the queue will be (N+1)/2 ≅ O(N),
and in the case of a skewed tree where all nodes are lopsided to one end, the queue will store 1 node at max.

### C++ Code
```
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        queue<pair<TreeNode*, bool>> q;
        q.push({root, false});
        int ans = 0;
        while(q.size()) {
            auto [cur, isLeft] = q.front(); q.pop();
            if(!cur -> left && !cur -> right && isLeft) 
                ans += cur -> val;
            if(cur -> right) q.push({cur -> right, false});
            if(cur -> left) q.push({cur -> left, true});
        }
        return ans;
    }
};
```
