class Solution {
public:
void generate(int i,vector<int> & nums, vector<int> &curr,vector<vector<int>> &result){
    
    result.push_back(curr);
    for(int j=i;j<nums.size();j++){

    curr.push_back(nums[j]);
    generate(j+1,nums,curr,result);
    curr.pop_back();

    }
    
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        int n = nums.size();
        if(n == 0){
            return result;
        }
        vector<int> curr;
        generate(0,nums,curr,result);
        return result;
    }

};
