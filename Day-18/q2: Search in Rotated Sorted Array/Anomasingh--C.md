Solution in C++

Solved using Binary Search--

Code:
class Solution {
public:
    int search(std::vector<int>& nums, int target)
    {
        int l = 0;
        int h = nums.size() - 1;

        while (l <= h)
        {
            int m = l + (h - l) / 2;   //Middle element in a array

            if (nums[m] == target)     //When middle element is the target element
            {
                return m;
            }

            if (nums[l] <= nums[m])  //When last element is smaller than mid element
            {
                if (nums[l] <= target && target < nums[m])  
                {
                    h = m - 1;
                } else
                {
                    l = m + 1;
                }
            } 
            else 
            {
                if (nums[m] < target && target <= nums[h])      // When middle element is less than target element
                {
                    l = m + 1;
                } else {
                    h = m - 1;
                }
            }
        }

        return -1;
    }
};