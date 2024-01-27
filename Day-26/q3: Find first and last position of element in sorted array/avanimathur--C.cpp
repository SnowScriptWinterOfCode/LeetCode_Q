#include <bits/stdc++.h>
using namespace std;

class Solution {

public:

    int firstfind(vector<int> nums, int n, int target){

        int firstOc = -1;
        int low = 0 , high = n -1 ;

        while ( low <= high ){

            int mid = ( low + high ) / 2;

            if ( target == nums[mid]){
                firstOc = mid ;
                high = mid - 1 ;
            }

            else if ( target > nums[mid]){
                low = mid + 1;
            }

            else{
                high = mid - 1;
            }
        }       

        return firstOc;

    }

    int lastfind(vector<int> nums, int n,int target){

        int lastOc = -1 ;
        int low = 0 , high = n -1 ;

        while ( low <= high ){

            int mid = ( low + high ) / 2;

            if ( target == nums[mid]){
                lastOc = mid ;
                low = mid + 1 ;
            }

            else if ( target > nums[mid]){
                low = mid + 1;
            }

            else {
                high = mid - 1;
            }
        }

        return lastOc;

    }

    vector<int> searchRange(vector<int>& nums, int target) {

        int n = nums.size() ;
        int firstOccur = firstfind(nums,n,target) ;
        int lastOccur = lastfind(nums,n,target) ;

        return {firstOccur,lastOccur};
        
    }
    
};