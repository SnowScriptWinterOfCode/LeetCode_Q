# Maximum Binary Tree

## Approach and Algorithm:

**Base Cases:**
1. If the left index (l) is greater than the right index (r), return NULL as there is no subarray to construct a tree from. 
2. If l is equal to r, create a leaf node with the value at index l and return it.

**Finding the Maximum Value:**
1. Initialize maxInd and maxNum to keep track of the index and value of the maximum element in the given subarray.
2. Iterate through the subarray from index l to r, updating maxInd and maxNum whenever a larger element is found.

**Create Root Node:**
1. Create a new TreeNode with the value at the maximum index (maxInd).

**Recursive Construction:**
1. Recursively call the solve function on the left subarray (from l to maxInd - 1) to construct the left subtree of the current node.
2. Recursively call the solve function on the right subarray (from maxInd + 1 to r) to construct the right subtree of the current node.

**Return the Root Node:**
1. Return the root node of the constructed binary tree.

**Main Function (constructMaximumBinaryTree):**
1. Initialize n as the size of the input vector nums.
2. Call the solve function with the entire array (nums), left index (0), and right index (n-1) to construct the maximum binary tree.
3. Return the root node of the constructed binary tree.

## Code:

```cpp
class Solution {
public:
    TreeNode* solve(vector<int>& nums, int l, int r){
        if(l > r)
            return NULL;
        if(l == r)
            return new TreeNode(nums[l]);

        int maxInd, maxNum = INT_MIN;
        for(int i = l; i<=r; i++){
            if(nums[i] > maxNum){
                maxNum = nums[i];
                maxInd = i;
            }
        }
        
        TreeNode * node = new TreeNode(nums[maxInd]);
        node -> left = solve(nums, l, maxInd - 1);
        node -> right = solve(nums, maxInd + 1, r);
        return node;    
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        int n = nums.size();
        return solve(nums, 0, n-1);
    }
};
