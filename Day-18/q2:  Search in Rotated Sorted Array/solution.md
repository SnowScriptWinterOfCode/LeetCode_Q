### Intuition
The idea is to use a modified binary search algorithm to find the target element in the rotated sorted array.

### Approach - Binary Search
1. Initialize start and end indices for the array.
2. Perform a binary search in each iteration.
3. Check the middle element (mid) of the current search range.
4. If `mid==target`, return its index.
5. Check if the left half (arr[start] to arr[mid]) or the right half (arr[mid] to arr[end]) is sorted.
6. Adjust the search range accordingly based on the sorted half and the target element.

### Complexity Analysis
`Time complexity`: O(log n)

`Space complexity`: O(1)

### C++ Code

```
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int s=0;
        int e=n-1;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(nums[mid]==target)return mid;
            if(nums[s]<=nums[mid]){
                if(nums[s]<=target and nums[mid]>=target){
                    e=mid-1;
                }
                else{
                    s=mid+1;
                }
            }
            else{
                if (nums[mid] <= target && target <= nums[e])
                s=mid+1;
                else{
                    e=mid-1;
                }
                
            }
        }
        return -1;
    }
};
```
