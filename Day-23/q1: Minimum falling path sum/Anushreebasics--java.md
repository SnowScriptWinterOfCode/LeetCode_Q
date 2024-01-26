```
class Solution {
    public int minFallingPathSum(int[][] matrix) {
        int m=matrix.length;
        int n=matrix[0].length;
        int[][] dp=new int[m][n];
        for(int j=0;j<m;j++){
            dp[0][j]=matrix[0][j];
        }
        for(int i=1;i<m;i++){
            for(int j=0;j<n;j++){
                int temp1=Integer.MAX_VALUE;
                if(j>0){
                    temp1=dp[i-1][j-1];
                }
                int temp2=dp[i-1][j];
                int temp3=Integer.MAX_VALUE;
                if(j<matrix.length-1){
                    temp3=dp[i-1][j+1];
                }
                dp[i][j]=Math.min(temp1,Math.min(temp2,temp3))+matrix[i][j];

            }
        }
        int maxi=Integer.MAX_VALUE;
        for(int i=0;i<m;i++){
            maxi=Math.min(maxi,dp[m-1][i]);
        }
        return maxi;
    }
}
```
