class Solution {
    public void rotate(int[] nums, int k) {
        k=k%nums.length;
        reverse(nums,0,nums.length-1);
        reverse(nums,0,k-1);
        reverse(nums,k,nums.length-1);
        for(int i=0;i<nums.length;i++){
            System.out.print(nums[i]+" "); 
        }
    }
    public static void reverse(int []nums,int sp,int ep){
        while(sp<ep){
            int temp=nums[sp];
            nums[sp]=nums[ep];
            nums[ep]=temp;
            sp++;
            ep--;
        }
        
    }
}