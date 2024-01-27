```
class Solution {
    List<List<Integer>> ans;
    public void helper(int arr[], int idx, List<Integer> a, int target){
        if(target==0){
            System.out.println(a);
            ans.add(new ArrayList<>(a));
            return;
        }
        if(idx==arr.length) return;
        
        if(arr[idx]<=target){
            a.add(arr[idx]);
            helper(arr,idx+1,a,target-arr[idx]);
            a.remove(a.size()-1);
        }
        int j = idx+1;
        while(j<arr.length && arr[j]==arr[j-1]) j++; 
        helper(arr,j,a,target); 
    }
    public List<List<Integer>> combinationSum2(int[] arr, int target) {
        Arrays.sort(arr);
        List<Integer> a = new ArrayList<>();
        ans = new ArrayList<>();
        helper(arr,0,a,target);
        return ans;
    }
}
```
