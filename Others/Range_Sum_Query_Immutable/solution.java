class NumArray {
    public int[] pf;
    public NumArray(int[] nums) {
        int n=nums.length;
        pf=new int[n];
        pf[0]=nums[0];
        for(int i=1;i<=n-1;i++){
            pf[i]=pf[i-1]+nums[i];
        }
        
    }
    
    public int sumRange(int left, int right) {
        int ans=0;
        if (left==0){
            ans=pf[right];
        }
        else{
            ans=pf[right]-pf[left-1];
        }
        return ans;
    }
}