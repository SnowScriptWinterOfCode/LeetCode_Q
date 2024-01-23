```
class Solution {
    public void rotate(int[][] matrix) {
        int n=matrix.length;
        int m=matrix[0].length;
        for(int i=0;i<n;i++){
            for(int j=i;j<m;j++){
                int temp=matrix[i][j];
                matrix[i][j]=matrix[j][i];
                matrix[j][i]=temp;
            }
        }
        for(int i=0;i<n;i++){
            int s=0;
            int e=m-1;
            while(s<=e){
                int temp=matrix[i][s];
                matrix[i][s]=matrix[i][e];
                matrix[i][e]=temp;
                s++;
                e--;
            }
            
        }
        
    }
}
```
