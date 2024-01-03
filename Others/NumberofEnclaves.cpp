class Solution {
public:

    void dfs(vector<vector<int>>& grid,vector<vector<int>> &visited,int row,int col,vector<int>delrow,vector<int> delcol){
        visited[row][col]=1;
        int n=grid.size();
        int m= grid[0].size();
        for(int i=0;i<4;i++){
            int nrow= row+delrow[i];
            int ncol= col+delcol[i];
            if( nrow>=0 && nrow<n && ncol>=0 && ncol<m && !visited[nrow][ncol] && grid[nrow][ncol]==1){
                visited[nrow][ncol]=1;
            dfs(grid,visited,nrow,ncol,delrow,delcol);
            }
        }
    }

    int numEnclaves(vector<vector<int>>& grid) {
        int rows= grid.size();
        int cols=grid[0].size();
        vector<int>delrow={-1,0,1,0};
        vector<int>delcol={0,1,0,-1};

        vector<vector<int>> visited(rows,vector<int>(cols,0));
        for(int i=0;i<cols;i++){
            if(grid[0][i]==1 && !visited[0][i]){
                visited[0][i]=1;
                dfs(grid,visited,0,i,delrow,delcol);                
            }
            if(grid[rows-1][i]==1 && !visited[rows-1][i]){
                visited[rows-1][i]=1;
                dfs(grid,visited,rows-1,i,delrow,delcol);                
            }
        }
        for(int i=0;i<rows;i++){
            if(grid[i][0]==1 && !visited[i][0]){
                visited[i][0]=1;
                dfs(grid,visited,i,0,delrow,delcol);                
            }
            if(grid[i][cols-1]==1 && !visited[i][cols-1]){
                visited[i][cols-1]=1;
                dfs(grid,visited,i,cols-1,delrow,delcol);                
            }
        }
        int count=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]==1 && !visited[i][j]){
                    count++;
                }
            }
        }
        return count;
    }
};
