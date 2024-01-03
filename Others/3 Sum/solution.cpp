#include<vector>
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        int i =0 ;                    
        int j =1;
        int k = nums.size()-1;

        while(i<k &&  j<k ){
            int sol =nums[i]+nums[j]+nums[k];
            if(sol == 0){
                vector<int> ans1;
                ans1.push_back(nums[i]);
                ans1.push_back(nums[j]);
                ans1.push_back(nums[k]);
                if(ans.find(ans1)!= ans.null()){
                    ans.push_back(ans1);
                        }
                j++;
            }
            else if(sol<0){
                j++;
            }else{
                k--;
            }
            if(k==j){
                i++;
                j=i+1;
            }
        }

        return ans;
    }
};
