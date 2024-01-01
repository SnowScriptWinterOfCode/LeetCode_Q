# Spiral Matrix Traversal

## Approach Explanation

In this approach, we will be using four loops to print all four sides of the matrix.

1. **First Loop:** This will print the elements from left to right.
2. **Second Loop:** This will print the elements from top to bottom.
3. **Third Loop:** This will print the elements from right to left.
4. **Fourth Loop:** This will print the elements from bottom to top.

   ![image](https://github.com/SnowScriptWinterOfCode/LeetCode_Q/assets/99477385/9925c610-4095-4c94-9640-a3e421635808)


### Steps:

1. Create and initialize variables `top` as `startingRow` index, `bottom` as `endingRow` index, `left` as `startingCol` index, and `right` as `endingCol` index.
2. In each outer loop traversal, print the elements of a square in a clockwise manner.
    - Print the top row, i.e., print the elements of the top row from column index `left` to `right` and increase the count of `top` so that it will move to the next row.
    - Print the right column, i.e., print the rightmost column from row index `top` to `bottom` and decrease the count of `right`.
    - Print the bottom row, i.e., if `top <= bottom`, then print the elements of a bottom row from column `right` to `left` and decrease the count of `bottom`.
    - Print the left column, i.e., if `left <= right`, then print the elements of the left column from the bottom row to the top row and increase the count of `left`.
3. Run a loop until all the squares of loops are printed.

   ![image](https://github.com/SnowScriptWinterOfCode/LeetCode_Q/assets/99477385/b7a726ab-690a-4542-acfe-a63442db9214)


## C++ Code

```cpp
#include <bits/stdc++.h>

using namespace std;

vector<int> printSpiral(vector<vector<int>> mat) {
 
  // Define ans array to store the result.
  vector<int> ans;
 
  int n = mat.size(); // no. of rows
  int m = mat[0].size(); // no. of columns
  
  // Initialize the pointers reqd for traversal.
  int top = 0, left = 0, bottom = n - 1, right = m - 1;

  // Loop until all elements are not traversed.
  while (top <= bottom && left <= right) {
      
    // For moving left to right
    for (int i = left; i <= right; i++)
      ans.push_back(mat[top][i]);

    top++;

    // For moving top to bottom.
    for (int i = top; i <= bottom; i++)
      ans.push_back(mat[i][right]);

    right--;
    
    // For moving right to left.
    if (top <= bottom) {
      for (int i = right; i >= left; i--)
       ans.push_back(mat[bottom][i]);

      bottom--;
    }

    // For moving bottom to top.
    if (left <= right) {
      for (int i = bottom; i >= top; i--)
        ans.push_back(mat[i][left]);

      left++;
    }
  }
  return ans;
}

int main() {
    
  //Matrix initialization.
  vector<vector<int>> mat   {{1, 2, 3, 4},
                             {5, 6, 7, 8},
                             {9, 10, 11, 12},
                             {13, 14, 15, 16}};
                             
  vector<int> ans = printSpiral(mat);

  for(int i = 0;i<ans.size();i++){
      
      cout<<ans[i]<<" ";
  }
  
  cout<<endl;
  
  return 0;
}
