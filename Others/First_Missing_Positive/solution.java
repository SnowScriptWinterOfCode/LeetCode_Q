class Solution {
    public int firstMissingPositive(int[] nums) {
        int n=nums.length;
        int i=0;
        while(i<n){
            if(nums[i]<1 || nums[i]>n || i==nums[i]-1){
                i++;
            }
            else{
                int ind=nums[i]-1;
                if(nums[ind]==nums[i]){
                    i++;
                }else{
                    int temp=nums[i];
                    nums[i]=nums[ind];
                    nums[ind]=temp;
                } 
            }       
        }
        
        for(int ind=0;ind<n;ind++){
            if(ind!=nums[ind]-1){
                return ind+1;
            }
        }
        return n+1;
    }
}