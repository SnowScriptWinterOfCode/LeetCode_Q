vector<int> searchRange(vector<int>& nums, int target) {
        int startingPosition = -1, endingPosition = -1;
        vector<int> ans;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(nums[i] == target){
                startingPosition = i;
                break;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(nums[i] == target){
                endingPosition = i;
                break;
            }
        }
        ans.push_back(startingPosition);
        ans.push_back(endingPosition);
        return ans;

}

// Another solution.cpp

class Solution {
public:
vector<int> searchRange(vector<int>& nums, int target) {        
vector<int> ans(2, -1);

        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                ans[0]=i;
                break;
            }
        }

        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target)
            ans[1]=i;
        }

        return ans;
}
};

