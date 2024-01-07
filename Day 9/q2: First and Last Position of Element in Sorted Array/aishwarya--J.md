# Approach

Binary search basic algorithm is applied with a modification.
If target is never equal to nums[mid] i.e, required number is not available.
When the target is equal to nums[mid] i.e, we have reached the reqiured number.
Now to find it's first and last occurence, Start and end variable are moved in left and right direction respectively. A while loop is used to find the occurences till both the 0th and 1st index of answer array is not equal to -1.
```
class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[] arr= new int[2];
        arr[0]=-1;
        arr[1]=-1;
        int n=nums.length;
        int start=0;
        int end=n-1;
        int mid=0;
        while(start<=end){
            mid=(start+end)/2;
            if(target==nums[mid]){
                start=mid;
                end=mid;
                while(arr[0]==-1 || arr[1]==-1){
                    if(start>=0 && nums[start]==target){
                        start--;
                    }
                    else{
                        arr[0]=start+1;
                    }
                    if(end<=n-1 && nums[end]==target){
                        end++;
                    }
                    else{
                        arr[1]=end-1;
                    }
                }
            }
            if(arr[0]!=-1 && arr[1]!=-1){
                break;
            }
            if(target<nums[mid]){
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        return arr;
    }
}
```