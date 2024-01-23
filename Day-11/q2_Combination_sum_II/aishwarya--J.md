```
class Solution {
    public List<List<Integer>> combinationSum2(int[] candidates, int target) {
        List<List<Integer>> arr = new ArrayList<>();
        Arrays.sort(candidates);
        func (candidates, arr, 0, target, new ArrayList<>());
        return arr;
    }
    void func (int[] candi, List<List<Integer>> arr, int idx, int target, List<Integer> temp) {
        if (target==0) {
            arr.add(new ArrayList<>(temp));
            return;
        }
        for (int i=idx; i<candi.length; i++) {
            if (i>idx && candi[i]==candi[i-1]) continue;
            if (candi[i]>target) break;
            temp.add(candi[i]);
            func (candi, arr, i+1, target-candi[i], temp);
            temp.remove(temp.size()-1);
        }
    }
}
```