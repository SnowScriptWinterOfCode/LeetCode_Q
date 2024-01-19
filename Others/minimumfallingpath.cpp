class Solution {
public:

   int minFallingPathSum(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        //int mini=1e9;      
        vector<vector<int>> dp(m+1,vector<int>(n+1,1e9));
        for(int i=0;i<n;i++){
            dp[0][i]=matrix[0][i];
        }
       
         
        //take
        for(int j=1;j<m;j++){
            for(int k=0;k<n;k++){
                int take1, take2, take3;
                if (k - 1 >= 0) {
                take1 = matrix[j][k] + dp[j - 1][k - 1];
                } else {
                take1 = 1e9;
                }
                take2 = matrix[j][k] + dp[j - 1][k];
                if (k + 1 < n) {
                take3 = matrix[j][k] + dp[j - 1][k + 1];
                } else {
                    take3 = 1e9;
                }
                dp[j][k]=min(take1,min(take2,take3));
            }
        }
        
        int ans=1e9;
        for(int i=0;i<n;i++){
            ans=min(ans,dp[m-1][i]);
        }
        return ans;
        
        //return dp[m-1][n-1];

        
    }
};















// class Solution {
// public:

//     int solve(vector<vector<int>>& matrix,int m,int n,int cm,int cn,vector<vector<int>> & dp){
//         if(cm==0 && cn<n && cn>=0){
//             return matrix[cm][cn];
//         }
//         if(cn>=n || cn<0){
//             return 1e9;
//         }
//         if(dp[cm][cn]!=1e9){
//             return dp[cm][cn];
//         }

//         int take1,take2,take3=1e9;
//         //take
        
//          take1 = matrix[cm][cn]+solve(matrix,m,n,cm-1,cn-1,dp);
       
       
//          take2 = matrix[cm][cn]+solve(matrix,m,n,cm-1,cn,dp);
       
        
//          take3 = matrix[cm][cn]+solve(matrix,m,n,cm-1,cn+1,dp);
        
        
//         return dp[cm][cn]=min(take1,min(take2,take3));




//     }
//     int minFallingPathSum(vector<vector<int>>& matrix) {
//         int m=matrix.size();
//         int n=matrix[0].size();
//         int mini=1e9;      
//         vector<vector<int>> dp(m+1,vector<int>(n+1,1e9));
//         for(int i=0;i<n;i++){
//         mini=min(mini,solve(matrix,m,n,m-1,i,dp));
//         }
//         return mini;
//     }
// };
