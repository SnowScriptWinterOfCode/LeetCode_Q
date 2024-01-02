class Solution {
    public int[] runningSum(int[] nums) {
        int n=nums.length;

        int[] runningSum= new int[n];

        runningSum[0]=nums[0];

        for(int i=1;i<=n-1;i++){
            runningSum[i]=runningSum[i-1]+nums[i];
        }
        return runningSum;
    }
}