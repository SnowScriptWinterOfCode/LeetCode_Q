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
