int findMin(vector<int>& nums) {
        int ind=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]<nums[i]){
                return nums[i+1];}
        }
        return nums[0];
    }

// C++ solution
class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0,end=nums.size()-1,mid=start+(end-start)/2 ;
        int mini=INT_MAX ;
        while(start<=end)
        {
            if(nums[mid]<mini)
            {
                mini = nums[mid] ;
            }
            else if(nums[start]<=nums[mid]) //left is sorted
            {
                if(mini>nums[start])
                    mini = nums[start] ;

                start = mid+1 ;
            }
            else //right is sorted
            {
                if(mini>nums[end])
                    mini = nums[end] ;
                end = mid-1 ;
            }
            mid = start+(end-start)/2 ;
        }
        return mini ;               
    }
};