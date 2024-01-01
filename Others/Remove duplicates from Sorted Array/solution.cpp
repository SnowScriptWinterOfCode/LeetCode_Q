class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size() ;
        int index = 0 ;
        for(int elements=1 ; elements<n ; elements++)
        {
            if(nums[index] != nums[elements])
            {
                nums[index+1] = nums[elements] ;
                index ++ ;
            }
        }
        return index+1 ;
    }
};