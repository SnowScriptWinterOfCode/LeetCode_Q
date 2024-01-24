```
class Solution {
    public int helper(int r, int c, int[][] dp){
        int a=dp.length;
        int b=dp[0].length;
        if(r>=a || c>=b){
            return 0;
        }
        if(r==a-1 && c==b-1){
            dp[r][c]=1;
            return 1;
        }
        if(dp[r][c]!=-1){
            return dp[r][c];
        }
        return dp[r][c]=helper(r+1,c,dp)+helper(r,c+1,dp);
    }
    public int uniquePaths(int m, int n) {
        int[][] dp=new int[m][n];
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                dp[i][j]=-1;
            }
        }
        return helper(0,0,dp);
    }
}
```
