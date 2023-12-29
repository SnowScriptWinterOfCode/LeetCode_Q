// Solution:
// This problem can be solved using binary search as it satisfies the logarithmic complexity constraint. We need to find the pivot point where the array becomes sorted
// The given array is a rotated sorted array. We can use binary search to find the minimum element as it will be present somewhere within the array.

// Approach:
// 1. Identify the sorted half.
// 2. find minimum element from sorted part and remove it..
// 3. update the mid.

#include<iostream>
#include<vector>
using namespace std ;
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