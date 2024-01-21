```
class Solution {


    static int helper(int m, int n, int[][] dp){
        int a = dp.length;
        int b = dp[0].length;
        if(m>=a || n>=b) return 0;
        if(m==a-1 || n==b-1){
            return dp[m][n]=1;
        }

        if(dp[m][n]!=-1) return dp[m][n];
        else{
            return dp[m][n] = (helper(m+1,n,dp)+helper(m,n+1,dp));
        }
    }
    public int uniquePaths(int m, int n) {

        int dp[][] = new int[m][n];

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                dp[i][j] = -1;
            }
        }
        return helper(0,0,dp);
    }
}
```