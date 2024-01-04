class Solution {
    public int maxSubArray(int[] nums) {
        int n=nums.length;
        int sum=0;
        int ans=Integer.MIN_VALUE;
        for(int i=0;i<=n-1;i++){
            if(sum>=0){
                sum=sum+nums[i];
            }
            else{
                sum=nums[i];
            }
            ans=Math.max(sum,ans);
        }
        return ans;
    }
}