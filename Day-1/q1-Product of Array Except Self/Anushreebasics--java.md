```
class Solution {
    public int[] productExceptSelf(int[] nums) {
        int n=nums.length;
        int[] pf=new int[n];    
        pf[0]=1;
        for(int i=1;i<n;i++){
            pf[i]=pf[i-1]*nums[i-1];

        }   
        int synx=1;
        for(int i=n-1;i>=0;i--){
            pf[i]=pf[i]*synx;
            synx=synx*nums[i];
        }
        return pf; 
    }
}
```
