## Approach
We initialize an array dp, where dp[i] represents the length of the longest increasing subsequence ending at index i. We can iterate through the array and update dp based on the elements before the current index. The final result will be the maximum value in the dp array.

## Python Code
```
class Solution:
    def lengthOfLIS(self, nums: List[int]) -> int:
        n = len(nums)
        dp = [1] * n
        for i in range(n - 1, -1, -1):
            for j in range(i + 1, n):
                if nums[i] < nums[j]: dp[i] = max(dp[i], 1 + dp[j])
        return max(dp)
```

## C++ Code

```
class Solution {
public:
    int lengthOfLIS(std::vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        int n = nums.size();
        std::vector<int> dp(n, 1);

        for (int i = 1; i < n; ++i) {
            for (int j = 0; j < i; ++j) {
                if (nums[i] > nums[j]) {
                    dp[i] = std::max(dp[i], dp[j] + 1);
                }
            }
        }

        return *std::max_element(dp.begin(), dp.end());
    }
};
```
