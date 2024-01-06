class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int i=0,j=m-1;
        while(i<n && j>=0){
            if(matrix[i][j]==target)return true;
            else if(target>matrix[i][j])i++;
            else j--;
        }
        return false;
    }
};

// Another solution 

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size() ;
        int column = matrix[0].size() ;
        int i,j,mid ;
        int left = 0 ;
        int right = (row*column)-1 ;

        while(left<=right) 
        {
            mid = left+(right-left)/2 ;
            i = mid/column ;
            j = mid%column ;

            if(target == matrix[i][j])
                return true ;
            
            else if(target>matrix[i][j])
            {
                left++ ;
            }
            else 
                right-- ;
        }
        return false;
    }
};
