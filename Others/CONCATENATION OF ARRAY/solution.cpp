class Solution 
{
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
        vector<int> ans ;

        for(int i=0 ; i<nums.size()*2 ; i++)
        {
            if(i>=nums.size())
            {
                ans.push_back(nums[i-nums.size()]) ;
            }
            else
            {
                ans.push_back(nums[i]) ;
            }
        }
        return ans; 
    }
};