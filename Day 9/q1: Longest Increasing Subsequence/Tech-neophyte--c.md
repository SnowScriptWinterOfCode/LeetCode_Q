# Using DP
```
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        std::vector<int> dp;

        for (int num : nums) {
            // Binary search to find the first element greater than or equal to 'num' in the 'dp'
            auto it = std::lower_bound(dp.begin(), dp.end(), num);

            // If not found add 'num' to the end
            if (it == dp.end()) {
                dp.push_back(num);
            } else {
                // If found, update it with 'num'
                *it = num;
            }
        }

        // Length of the LIS = size of the 'dp' vector
        return dp.size();
    }
};

```
