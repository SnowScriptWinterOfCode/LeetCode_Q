class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int start =0 ;
        int n = 
        int end = nums.size() -1;
        int flag = 0;
        while(end>=start){
            int mid = (start+end)/2;

            if(nums[mid]== target){
                if(nums[mid-1]!= target || mid ==0){
                    ans.push_back(mid);
                    flag = 1;
                    break;
                }else{
                    end = mid-1;
                }
            }else if(nums[mid]>target){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        if(flag == 0){
            ans.push_back(-1);
        }
        flag =0;
        while(end>=start){
            int mid = (start+end)/2;

            if(nums[mid]== target){
                if(nums[mid+1]!= target || mid ==(nums.size()-1)){
                    ans.push_back(mid);
                    return ans;
                }else{
                    start = mid+1;
                }
            }else if(nums[mid]>target){
                end = mid-1;
            }else{
                start = mid+1;
            }
        }
        if(flag == 0){
            ans.push_back(-1);
        }
        return ans;
    }
};
