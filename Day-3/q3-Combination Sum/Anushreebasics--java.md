```
class Solution {
    public void helper(List<Integer> curr, int id, List<List<Integer>> ans, int target, int[] candidates){
        if(target<0){
            return;
        }
        if(target==0){
            ans.add(new ArrayList<>(curr));
        }
        for(int st=id;st<candidates.length;st++){
            curr.add(candidates[st]);
            helper(curr,st,ans,target-candidates[st],candidates);
            curr.remove(curr.size()-1);
        }
    }
    public List<List<Integer>> combinationSum(int[] candidates, int target) {
        List<List<Integer>> ans=new ArrayList<>();
        Arrays.sort(candidates);
        helper(new ArrayList<>(),0,ans,target,candidates);
        return ans;
    }
}
```
