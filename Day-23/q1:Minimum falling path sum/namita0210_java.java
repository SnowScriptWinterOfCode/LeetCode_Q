public class MinimumFallingPathSum {
    public int minFallingPathSum(int[][] matrix) {
        int n = matrix.length;

        // Create a DP array to store minimum falling path sum
        int[][] dp = new int[n][n];

        // Copy the first row of the matrix to the DP array
        for (int i = 0; i < n; i++) {
            dp[0][i] = matrix[0][i];
        }

        // Iterate through the matrix to fill the DP array
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < n; j++) {
                // Find the minimum value from the three possible paths
                int minPath = dp[i - 1][j];
                if (j > 0) {
                    minPath = Math.min(minPath, dp[i - 1][j - 1]);
                }
                if (j < n - 1) {
                    minPath = Math.min(minPath, dp[i - 1][j + 1]);
                }

                // Update the DP array with the minimum falling path sum
                dp[i][j] = matrix[i][j] + minPath;
            }
        }

        // Find the minimum falling path sum in the last row of the DP array
        int minSum = dp[n - 1][0];
        for (int i = 1; i < n; i++) {
            minSum = Math.min(minSum, dp[n - 1][i]);
        }

        return minSum;
    }

    
}
