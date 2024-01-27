class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
        left = 0
        right = len(height) - 1
        distance = right - left
        max_area = 0
        while left < right:
            max_area = max(min(height[left],height[right]) * distance, max_area)
            if height[left] < height[right]:
                left += 1
            else:
                right -= 1
            distance -= 1
        return max_area