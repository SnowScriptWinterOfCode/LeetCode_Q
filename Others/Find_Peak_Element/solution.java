class Solution {
    public int findPeakElement(int[] nums) {
        int n=nums.length;
        if(n==1){return 0;}
        for(int i=1;i<n-1;i++){
            if(nums[i]>nums[i-1] && nums[i]>nums[i+1]){
                return i;
            }
        }
        if(nums[n-1]>nums[n-2]){return n-1;}
        return 0;
    }
}