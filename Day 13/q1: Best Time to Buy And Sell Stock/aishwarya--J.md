# Solution
```
class Solution {
    public int maxProfit(int[] prices) {
        int least = Integer.MAX_VALUE;
        int ans = 0;
        int profit = 0;
        
        for(int i = 0; i < prices.length; i++){
            if(prices[i] < least){
                least = prices[i];
            }
            profit = prices[i] - least;
            if(ans < profit){
                ans = profit;
            }
        }
        return ans;
    }
}
```