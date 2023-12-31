class Solution {
    public void rotate(int[][] matrix) {
        int n=matrix.length;
        int m=matrix[0].length;
        //transpose of matrix
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        for(int i=0;i<n;i++){
            int sp=0;
            int ep=m-1;
            //swap
            while(sp<ep){
                int temp=matrix[i][sp];
                matrix[i][sp]=matrix[i][ep];
                matrix[i][ep]=temp;
                sp++;
                ep--;
                }
        }
    }
}