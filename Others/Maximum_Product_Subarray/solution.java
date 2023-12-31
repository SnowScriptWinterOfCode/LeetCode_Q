class Solution {
    public int maxProduct(int[] nums) {
        int n = nums.length;
        int prefixProduct = 1;
        int max1 = Integer.MIN_VALUE;
        int suffixProduct = 1;
        int max2 = Integer.MIN_VALUE;
        
        for(int i=0;i<n;i++){
            if(prefixProduct == 0){
                prefixProduct = nums[i];
            }else{
                prefixProduct = prefixProduct * nums[i];
            }
            max1 = Math.max(max1,prefixProduct);
        }

        for(int i = n-1;i>=0;i--){
            if(suffixProduct == 0){
                suffixProduct = nums[i];
            }else{
                suffixProduct = suffixProduct * nums[i];
            }
            max2 = Math.max(max2,suffixProduct);
        }
        return Math.max(max1,max2);
    }
}