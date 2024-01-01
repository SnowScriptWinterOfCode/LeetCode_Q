class Solution {
    public int numSubarrayBoundedMax(int[] nums, int left, int right) {
        int n=nums.length;
        int ans=0;
        int last_out_of_range_index=0;
        int preserve=0;
        for(int ep=0;ep<n;ep++){
            if(nums[ep]>right){
                ans=ans+0;
                last_out_of_range_index=ep+1;
                preserve=0;
            }
            else if(nums[ep]>=left && nums[ep]<=right){
                ans=ans+ep-last_out_of_range_index+1;
                preserve=ep-last_out_of_range_index+1;
            }
            else{
                ans=ans+preserve;
            }
        }
        return ans;
    }
}