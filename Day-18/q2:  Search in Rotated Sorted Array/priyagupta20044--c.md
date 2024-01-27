class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size = nums.size(); 
        int s=0,e=size-1;
        while(s<=e){
            int m = s+ (e-s)/2; 
            if (nums[m]==target){
                return m;
            }
            else if (nums[s] <= nums[m]){ // left sorted
                if (nums[s] <= target && target <= nums[m]){
                    e=m-1; //eliminate right half
                }
                else{
                    s=m+1; // eliminate left half 
                }
            }
            else{ // right sorted
                if (nums[m] <= target && target <=nums[e]){
                    s=m+1; // eliminate left half
                }
                else{
                    e=m-1; //eliminate right half
                }
            }
        }
        return -1;
    }
};
