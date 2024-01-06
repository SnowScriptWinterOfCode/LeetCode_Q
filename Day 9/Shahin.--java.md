class Solution {
    public int[] searchRange(int[] nums, int target) {
        int [] res=new int[2];
        res[0]=-1;
        res[1]=-1;
        int n=nums.length;
        int i=0;
        int j=n-1;
        while(i<n && j>=0){
            if(nums[i]==target && res[0]==-1){
                res[0]=i;
            }
            if(nums[j]==target && res[1]==-1){
                res[1]=j;
            }
            i++;
            j--;
        }
        return res;
    }
}