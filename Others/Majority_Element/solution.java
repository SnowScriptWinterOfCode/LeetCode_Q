class Solution {
    public int majorityElement(int[] nums) {
        int n=nums.length;
        int value=nums[0];
        int count=1;
        for(int i=1;i<n;i++){
            if(nums[i]==value){
                count++;
            }
            else if(count==0){
                count++;
                value=nums[i];
            }
            else{
                count--;
            }
        }
        return value;
    }
}