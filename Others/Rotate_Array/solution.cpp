class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size() ;

        reverse(nums.begin(),nums.begin()+(nums.size()-k)) ; 
        // reverse only takes iterator as an argument that's why we need to use 
        // nums.begin()+ (nums.size()-k).. as it will return an iterator
        reverse(nums.begin()+(nums.size()-k) ,nums.end()) ;
        reverse(nums.begin(),nums.end()) ;
     
    }
};