## Python code:
```
class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        row = [1]*n

        for i in range(m-1):
            newRow = [1]*n

            for j in range(n-2, -1, -1):
                newRow[j] = newRow[j+1] + row[j]
            row = newRow 

        return row[0]
```
## cpp code: Using dp
```
class Solution {
public:
    int uniquePaths(int m, int n) {
        
        vector<vector<int>> dp(m, vector<int>(n, 0));
        
        
        for (int i = 0; i < m; ++i) {
            dp[i][0] = 1;
        }
        for (int j = 0; j < n; ++j) {
            dp[0][j] = 1;
        }
        
       
        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }
        
        
        return dp[m - 1][n - 1];
    }
};
```
## Cpp code: Using combinations:
```
class Solution {
public:
    int nCr(int n, int r) {
        if (r > n) return 0;
        if (r == 0 || n == r) return 1;
        double res = 0;
        for (int i = 0; i < r; i++) {
            res += log(n-i) - log(i+1);
        }
        return (int)round(exp(res));
    }

    int uniquePaths(int m, int n) {
        int t = (m-1) + (n-1);
       
           return nCr(t,m-1);
       
    }
};
```  
