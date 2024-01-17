#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to perform the search in a rotated array
    int search(const vector<int>& nums, int target) {
        // Check if the array is empty
        if (nums.empty()) {
            return -1;
        }

        // Binary search to find the pivot point
        int left = 0, right = nums.size() - 1;
        while (left < right) {
            int mid = (left + right) / 2;

            if (nums[mid] > nums[right]) {
                left = mid + 1;
            } else {
                right = mid;
            }
        }

        // 'left' now contains the pivot index
        int pivot = left;

        // Reset pointers for the second binary search
        left = 0;
        right = nums.size() - 1;

        // Binary search to find the target in the rotated array
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

        // If Target not found
        return -1;
    }
};
