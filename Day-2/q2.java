//Question 2 Day 2
class Solution {
    public void merge(int[] nums1, int m, int[] nums2, int n) {
        for(int i = 0; i<n-1; i++){
            nums1[m+i+1]=nums2[i];
        }
        for(int j = 0 ; j<m+n; j++){
            for(int k = j+1; k<m+n; k++){
                if(nums1[j]>nums1[k]){
                    int temp = nums1[j];
                    nums1[j]=nums1[k];
                    nums1[k]=temp;
                } 
            }
        }
    }
}
