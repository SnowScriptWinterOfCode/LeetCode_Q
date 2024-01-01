class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0 , high = n-1 , ans = INT_MAX;

        while( low <= high ){
            int mid = low +  ( high - low )/2;

            //search space is already sorted then no need to do BS optimisation
            if(nums[low] <= nums[mid] && nums[mid] <= nums[high]){
                ans = min ( ans, nums[low] );
                break;
            }

            //left half is sorted
            if ( nums[low] <= nums[mid] ){
                ans = min (ans, nums[low] ); //take out the min from left half i.e. first element
                low = mid + 1 ;     //then discard the left half
            }
            //right half is sorted
            else{
                ans = min  ( ans, nums[mid] ); //take out the min from right half i.e. first element
                high = mid - 1;     // then discard the right half
            }

        }
        return ans;
    }
};
