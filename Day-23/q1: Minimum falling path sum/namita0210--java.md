```public class MinimumFallingPathSum {
    public int minFallingPathSum(int[][] matrix) {
        int n = matrix.length;

        // Iterate through the matrix starting from the second row
        for (int i = 1; i < n; i++) {
            for (int j = 0; j < n; j++) {
                // Calculate the minimum falling path sum for the current cell
                int minPathSum = matrix[i - 1][j];

                if (j > 0) {
                    minPathSum = Math.min(minPathSum, matrix[i - 1][j - 1]);
                }

                if (j < n - 1) {
                    minPathSum = Math.min(minPathSum, matrix[i - 1][j + 1]);
                }

                // Update the current cell with the minimum falling path sum
                matrix[i][j] += minPathSum;
            }
        }

        // Find the minimum falling path sum in the last row
        int minSum = Integer.MAX_VALUE;
        for (int j = 0; j < n; j++) {
            minSum = Math.min(minSum, matrix[n - 1][j]);
        }

        return minSum;
    }

    
}
```