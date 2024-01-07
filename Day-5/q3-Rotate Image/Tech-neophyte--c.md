# Approach 1:
<br /> 1. Reverse up to down all the rows (Reverse the columns)
<br/> 2. Transpose
```
void rotate(vector<vector<int> > &matrix)
 {
    reverse(matrix.begin(), matrix.end());
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = i + 1; j < matrix[i].size();j++)
            swap(matrix[i][j], matrix[j][i]);
    }
}
```
# Approach 2:
<br/>1. Transpose the matrix
<br />2. Reverse each row.
```
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<i;j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }

        }
         for(int i=0;i<n;i++)
         reverse(matrix[i].begin(),matrix[i].end());
        
    }
};
```
