class Solution {
    public int singleNonDuplicate(int[] nums) {
        int value=nums[0];
        int n=nums.length;
        for(int i=1;i<n-1;i++){
            if(value==nums[i]){
                value=nums[i+1];
                i++;
            }
            else{
                return value;
            }
        }
        return nums[n-1];
    }
}