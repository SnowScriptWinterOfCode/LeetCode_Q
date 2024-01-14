# Cpp Code
<br /> 1. Update the variable maxreach with the next highest integer. It is the highest index it can jump upto at that point.
<br /> 2. If index is greater than the index it can reach upto, return false. 

```
class Solution {
public:
    bool canJump(vector<int>& nums) {
    int n = nums.size();
    int maxReach = 0;
    for (int i = 0; i < n; i++) {
        if (i > maxReach) return false;
        maxReach = max(maxReach, i + nums[i]);
    }
    return true;
}
};
```
# Python Code
```
class Solution:
    def canJump(self, nums: List[int]) -> bool:
        jump = 0
        for n in nums:
            if jump < 0:
                return False
            elif n > jump:
                jump = n
            jump -= 1
            
        return True
```
