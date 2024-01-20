def can_jump(nums):
    n = len(nums)
    max_reach = 0

    for i in range(n):
        # If the current index is beyond the furthest position reachable, return false
        if i > max_reach:
            return False

        # Update the furthest position reachable from the current index
        max_reach = max(max_reach, i + nums[i])

        # If the furthest position is greater than or equal to the last index, return true
        if max_reach >= n - 1:
            return True

    return False

# Example usage:
nums1 = [2, 3, 1, 1, 4]
print(can_jump(nums1))  # Output: True

nums2 = [3, 2, 1, 0, 4]
print(can_jump(nums2))  # Output: False
