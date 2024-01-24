```
public class UniquePaths {
    public int uniquePaths(int m, int n) {
        int[][] dp = new int[m][n];

        // Initialize the first row and column
        for (int i = 0; i < m; i++) {
            dp[i][0] = 1;
        }

        for (int j = 0; j < n; j++) {
            dp[0][j] = 1;
        }

        // Fill the dp array by summing up the paths from the left and the paths from the top
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }

        return dp[m - 1][n - 1];
    }

    public static void main(String[] args) {
        UniquePaths solution = new UniquePaths();

        // Example 1
        int m1 = 3, n1 = 7;
        System.out.println(solution.uniquePaths(m1, n1)); // Output: 28

        // Example 2
        int m2 = 3, n2 = 2;
        System.out.println(solution.uniquePaths(m2, n2)); // Output: 3
    }
}

```