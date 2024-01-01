"class Solution {
    void solve(vector<int>candidates, int size, int target, int index, vector<int>&output, vector<vector<int>>&ans){
        if(index==size){
            if(target==0)
                ans.push_back(output);
            return;
        }
        solve(candidates, size, target, index+1, output, ans);
        int num = candidates[index];
        if(num<=target){
            output.push_back(num);
            solve(candidates, size, target - num, index, output, ans);
            output.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int size=candidates.size();
        vector<int>output;
        vector<vector<int>>ans;
        solve(candidates, size, target, 0, output, ans);
        return ans;
    }
};"
