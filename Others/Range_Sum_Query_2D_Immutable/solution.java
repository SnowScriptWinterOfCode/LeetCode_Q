class NumMatrix {
    int[][] PSmat;
    public NumMatrix(int[][] matrix) {
        int n=matrix.length;
        int m=matrix[0].length;
        //prefixSumMatrix
        PSmat=new int[n][m];
        //row wise prefix sum
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(j==0){
                    PSmat[i][j]=matrix[i][j];
                }
                else{
                    PSmat[i][j]=PSmat[i][j-1]+matrix[i][j];
                }    
            }
        }
        //column wise prefix sum
         for(int i=1;i<n;i++){
            for(int j=0;j<m;j++){
                PSmat[i][j]=PSmat[i-1][j]+PSmat[i][j];   
            }
        }
    }
    
    public int sumRegion(int row1, int col1, int row2, int col2) {
        int sum=0;
        sum+=PSmat[row2][col2];
        if(row1-1>=0){
            sum-=PSmat[row1-1][col2];
        }
        if(col1-1>=0){
            sum-=PSmat[row2][col1-1];
        }
        if(row1-1>=0 && col1-1>=0){
            sum+=PSmat[row1-1][col1-1];
        }
        return sum;
    }
     
}