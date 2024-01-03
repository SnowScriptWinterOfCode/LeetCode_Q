package container_with_most_water;

public class Solution {
    public static int maxArea(int[] height) {
        int l = 0;
        int r = height.length - 1;
        int max = 0;

        while (l < r) {
            int c = Math.min(height[l], height[r]) * (r - l);
            max = Math.max(max, c);

            if (height[l] < height[r]) {
                l++;
            } else {
                r--;
            }
        }
        return max;
    }
}
