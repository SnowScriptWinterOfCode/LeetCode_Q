#include <bits/stdc++.h>
using namespace std;

class Solution {
public:

    int search(const vector<int>& nums, int target) {
       
        if (nums.empty()) {
            return -1;
        }

        int left = 0, right = nums.size() - 1;
        while (left < right) {
            int mid = (left + right) / 2;

            if (nums[mid] > nums[right]) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }

        int pivot = left;

        left = 0;
        right = nums.size() - 1;

        while (left <= right) {
            int mid = (left + right) / 2;
            int midVal = nums[(mid + pivot) % nums.size()];

            if (midVal == target) {
                return (mid + pivot) % nums.size();
            } else if (midVal < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return -1;
    }
};
