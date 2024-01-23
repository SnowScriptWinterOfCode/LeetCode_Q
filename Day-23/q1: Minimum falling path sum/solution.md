# Approach:

- Recursive Approach:  
The recursive function helper is designed to calculate the minimum falling path sum from the current cell (i, j) to the bottom row of the matrix.
The base cases are defined for the top row, where the falling path sum is simply the value of the cell.

- Memoization:  
To avoid redundant calculations, a 2D array dp is used to memoize the results of subproblems. The dp array is initialized with a large value (e.g., INT_MAX).
Before calculating the falling path sum for the current cell, the algorithm checks if the result for the current cell is already calculated and stored in dp. If yes, it returns the memoized result.

- Calculate Minimum Falling Path Sum:  
For the current cell (i, j), the algorithm calculates the falling path sum considering three possible paths:
  - Straight down: s = matrix[i][j] + helper(matrix, i - 1, j)
  - Down-left: ld = matrix[i][j] + helper(matrix, i - 1, j - 1)
  - Down-right: rd = matrix[i][j] + helper(matrix, i - 1, j + 1)
The minimum falling path sum is then calculated as min(s, min(ld, rd)).

- Iterate Over Starting Points:
The main function iterates over all possible starting points in the bottom row (the last row of the matrix).
It finds the minimum falling path sum among these starting points.

- Return the Result:
The final result is the minimum falling path sum among all starting points in the bottom row.

- Time Complexity:
The time complexity is improved by memoization, reducing redundant calculations. The overall time complexity is O(n * m), where n is the number of rows and m is the number of columns in the matrix.

- Space Complexity:
The space complexity is O(n * m) due to the memoization array dp.


## C++ code

``` 

    int dp[101][101];

    int helper(vector<vector<int>>& matrix, int i, int j) {
        if (i == 0 && j < matrix[0].size() && j >= 0) {
            return matrix[0][j];
        }
        if (j < 0 || j >= matrix[0].size()) {
            return 1e7;
        }

        if (dp[i][j] != INT_MAX) {
            return dp[i][j];
        }

        int s = matrix[i][j] + helper(matrix, i - 1, j);
        int ld = matrix[i][j] + helper(matrix, i - 1, j - 1);
        int rd = matrix[i][j] + helper(matrix, i - 1, j + 1);
        return dp[i][j] = min(s, min(ld, rd));
    }

    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        // Initialize dp array
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                dp[i][j] = INT_MAX;
            }
        }

        int mini = INT_MAX;
        for (int j = 0; j < m; j++) {
            mini = min(mini, helper(matrix, n - 1, j));
        }
        return mini;
    }
```
