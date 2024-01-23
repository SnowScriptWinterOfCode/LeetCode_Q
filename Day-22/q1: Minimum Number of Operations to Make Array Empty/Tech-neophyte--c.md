## Approach:

<br /> 1. Create a hashmap object to count the occurrences of each element in the given array nums. Initialize a variable ans = 0 to keep track of the minimum number of operations required.
<br /> 2. Check if frequency is equal to 1. If yes, return -1, as it is not possible to perform the required operations on a single element.
Else increment the answer ans by the ceiling division of c by 3.
<br />3. After iterating through all counts in the Counter, return the final value of ans as the minimum number of operations required to empty the array.
```
class Solution {
public:
    int minOperations(vector<int>& nums) 
    {
        unordered_map<int, int> counter;
        int ans = 0;
        for (int i=0;i<nums.size();i++)
            counter[nums[i]]++;
        for (auto it : counter)
        {
            if (it.second == 1)
                return -1;
            ans = ans + ceil( (double)(it.second) / 3) ;
        }
        return ans;
    }
};
```
