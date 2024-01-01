```
class Solution {
    public int findPairs(int[] nums, int k) {
        HashMap<Integer,Integer> map=new HashMap<>();
        for(int i=0;i<nums.length;i++){
            if(map.containsKey(nums[i])){
                map.put(nums[i],map.get(nums[i])+1);
            }else{
                map.put(nums[i],1);
            }
        }
        int result=0;
        for(int i:map.keySet()){
            if(k==0 && map.get(i)>1 || k>0 && map.containsKey(i+k)){
                result++;
            }
        }
        return result;   
    }
}
```
