class Solution {
    public int pivotIndex(int[] nums) {
        int n=nums.length;
        int[] suffixSum = new int[n];
        suffixSum[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--){
            suffixSum[i]=suffixSum[i+1]+nums[i];
        }

        int prefix=0;
        for(int j=0;j<n-1;j++){
            if(prefix==suffixSum[j+1]){
                return j;
            }
            prefix=prefix+nums[j];
        }
        if(0==prefix){
            return n-1;
        }
        return -1;
    }
}