```
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low=0, high=nums.size()-1,mid = low+(high-low)/2 ;

        while(low<=high)
        {
            if(nums[mid] == target)
                return mid ;
            
            else if(nums[low]<= nums[mid]) // left is sorted
            {
                if(target>=nums[low] && target<=nums[mid]) // target lies b/w left half/sorted half
                    high = mid-1 ;
                else // target lies b/w right half 
                    low = mid+1 ; 
            }

            else // right half is sorted 
            {
                if(target>=nums[mid] && target<=nums[high]) // target lies b/w right half
                    low = mid+1 ;
                else // target lies b/w left half
                    high = mid-1 ;
            }
            mid = low+(high-low)/2 ;
        }
        return -1 ;
    }
};
```
