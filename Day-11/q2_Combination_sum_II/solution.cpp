class Solution {
public:

    int n;
    vector<vector<int>>combinations;

    void getCombinations(int index , int target , vector<int>&combination , vector<int>&nums){

        if(0 == target){
            combinations.push_back(combination);
            return;
        }

        for(int i=index;i<n;i++){

            if(nums[i] <= target){

                combination.push_back(nums[i]);
                getCombinations(i+1,target-nums[i],combination,nums);
                combination.pop_back();

            }
            else break; 

            
            while(i < n-1 && nums[i] == nums[i+1]) i++;
        }

    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {

        n = nums.size();
        sort(nums.begin(),nums.end());
        
        vector<int>combination;

        getCombinations(0,target,combination,nums);

        return combinations;
    }
};
