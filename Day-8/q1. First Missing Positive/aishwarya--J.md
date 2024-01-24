```
class Solution {
    public int firstMissingPositive(int[] nums) {
        int n=nums.length;
        Arrays.sort(nums);
        int sum=1;
        for(int i=0;i<n;i++)
        {
            if(sum==nums[i])
            {
                sum++;
            }
        }
return sum;
    }
}

```