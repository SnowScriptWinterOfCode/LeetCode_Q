```
import java.util.*;


class Solution {
    public int minOperations(int[] nums) {
        HashMap<Integer, Integer> hm = new HashMap<>();
        for (int i = 0; i < nums.length; i++) {
            hm.put(nums[i], hm.getOrDefault(nums[i], 0) + 1);
        }
        int ans=0;
        for(int k: hm.keySet()){
            int val=hm.get(k);
            if(val==1){
                return -1;
            }
            ans+=val/3;
            if(val%3!=0){
                ans++;
            }
        }
        return ans;
    }
}
```
