```
class Solution {
    public boolean binaSer(int[] arr, int s, int e, int k){
        while(s<=e){
            int mid=(s+e)/2;
            if(arr[mid]==k){
                return true;
            }
            else if(arr[mid]>k){
                e-=1;
            }
            else{
                s+=1;
            }
        }
        return false;
    }
    public int findPairs(int[] nums, int k) {
        HashSet<Integer> qns=new HashSet<>();
        Arrays.sort(nums);
        int n=nums.length;
        for(int i=0;i<n-1;i++){
            if(binaSer(nums,i+1,n-1,nums[i]+k)){
                qns.add(nums[i]);
            }
        }
        return qns.size();      
    }
}
```
