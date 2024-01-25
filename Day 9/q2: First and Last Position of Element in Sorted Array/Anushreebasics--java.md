```
class Solution {
    public int findInd(int[] nums, int target, boolean flag){
        int s=0;
        int e=nums.length-1;
        int ans=-1;
        while(s<=e){
            int mid=(s+e)/2;
            if(nums[mid]>target){
                e=mid-1;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else if(nums[mid]==target){
                ans=mid;
                if(flag){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
        }
        return ans;
    }
    public int[] searchRange(int[] nums, int target) {
        int[] arr=new int[2];

        arr[0]=findInd(nums,target,true);
        arr[1]=findInd(nums,target,false);

        return arr;
        
    }
}
```
