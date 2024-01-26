```
class Solution {
public:
    int findMin(vector<int>& nums) {
        int s=0;
        int e=nums.size()-1;
        int ans=INT_MAX;
        while(s<=e){
            int mid=(s+e)/2;
            //right sorted
            if(nums[mid]<=nums[e]){
                if(nums[mid]<=ans){
                    ans=nums[mid];
                    
                }
                e=mid-1;
            }
            //left sorted
            else if(nums[mid]>=nums[s]){
                if(nums[s]<=ans){
                    ans=nums[s];
                    
                }
                s=mid+1;
            }
        }
        return ans;
    }
};
```
