## Intuition
Recursively traversing the tree based on the BST Property; comparing data of nodes and value that we have to search.

## Properties of a BST
- The left subtree of a node contains only nodes with keys lesser than the node’s key.
- The right subtree of a node contains only nodes with keys greater than the node’s key.
- The left and right subtree each must also be a binary search tree.

## Approach - Recursive
### Two Base Cases
1.  if root is NULL, we return NULL ;
2.  if data of root matches the value to be searched, we return the node;
### Recursive Case 
1. Recursive Traversal Statements based on comparison of node's data, the value to be searched, and the BST Property
2. If data of node is greater than value, we search in the left subtree and OMIT right subtree
3. Else, we search in the right subtree & OMIT the left subtree.

## Complexity Analysis

`Time complexity`: O(logN)

`Space complexity`: O(N)

## C++ Code
```
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        // base case 
        // if element not found or if element found 
        if (root == NULL){
            return NULL ; 
        }
        if (root -> val == val){
            return root ; 
        }
        // recursive case
        // traversing left subtree
        if (root -> val > val){
            return searchBST(root -> left, val) ;
        }
        // traversing right subtree
        else{
            return searchBST(root -> right, val) ; 
        }
    }
};
```
## Approach - Iterative

1. Create a temp node and make it equal to `root`
2. Now, traverse till temp is NOT EQUAL to NULL
3. While traversing
   - Compare temp's data and the `val` that we have to find.
   - Move to left or right child of temp based on the comparison using the BST Property.

## Complexity Analysis
`Time complexity`: O(logN)

`Space complexity`: O(1)

## C++ Code

```
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode *temp = root ; 
        while(temp != NULL){
            if (temp -> val == val){
                return temp ; 
            }
            if (temp -> val > val){
                temp = temp -> left; 
            }
            else{
                temp = temp -> right ; 
            }
        }
        return NULL ;  
    }
};
```
