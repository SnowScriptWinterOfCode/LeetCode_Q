
## Python Code
```
class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        curr_max, maxsofar = 0, 0
        for i in range(1, len(prices)):
            curr_max += prices[i] - prices[i-1]
            curr_max = max(curr_max, 0)
            maxsofar = max(maxsofar, curr_max)
        return maxsofar

```
