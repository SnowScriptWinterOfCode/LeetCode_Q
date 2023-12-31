class Solution {
    public int[] searchRange(int[] nums, int target) {
        int[] result = {-1, -1};
        int left = 0;
        int right = nums.length - 1;
        
        // Find the leftmost index of target
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                result[0] = mid;
                right = mid - 1; // Continue search on the left side
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        // Reset pointers for finding the rightmost index of target
        left = 0;
        right = nums.length - 1;
        
        // Find the rightmost index of target
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                result[1] = mid;
                left = mid + 1; // Continue search on the right side
            } else if (nums[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        
        return result;
    }
}
