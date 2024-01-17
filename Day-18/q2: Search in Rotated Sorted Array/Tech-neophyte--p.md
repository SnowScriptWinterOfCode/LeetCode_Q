## Python code:
```
class Solution {
    public int search(int[] A, int B) {
        int l = 0;
        int r = A.length-1;
        int m;
        while(l<=r){
            m = (l+r)/2;
            if(A[m] == B) return m;
            if(A[m]>=A[0]){
                if(B>=A[0] && B<=A[m]) r = m-1;
                else l = m+1;
            }else{
                if(B>=A[m] && B<=A[A.length-1]) l = m+1;
                else r = m-1;
            }

        }
        return -1;
    }
}
```
