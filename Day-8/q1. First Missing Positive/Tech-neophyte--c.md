# Intuitive approach(Using Sorting): 
<br />1. First we will sort the array [T.C = O(nlogn)]. 
<br />2. Maintain an integer j to keep track of the positive integers.
<br />3. Skip over all the negative elements in the array.
<br />4. Increment j unless two elemts are same. This way j denotes the next least positive element that should be present.
<br />5. If element !=j or we reach end of the array-> return j.
```
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int j=1;
        for(int i=0;i<nums.size();i++){
            if (nums[i]>0){
                if (nums[i]!=j){
                    return j;
                }
                if (i<nums.size()-1 && nums[i]==nums[i+1]){
                continue;
                }
                j++;
            }
        }
        return j;
    }
};
```
