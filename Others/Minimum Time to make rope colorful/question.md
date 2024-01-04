# Minimum Time to Make Rope colorful
Alice has n balloons arranged on a rope. You are given a 0-indexed string colors where colors[i] is the color of the ith balloon.

Alice wants the rope to be colorful. She does not want two consecutive balloons to be of the same color, so she asks Bob for help. Bob can remove some balloons from the rope to make it colorful. You are given a 0-indexed integer array neededTime where neededTime[i] is the time (in seconds) that Bob needs to remove the ith balloon from the rope.

Return the minimum time Bob needs to make the rope colorful.

 

Example 1:

![image](https://github.com/Shubh-Krishna/LeetCode_Q/assets/135266175/3c7dc947-1a5f-44fe-a3ba-337d78bd0634)


Input: colors = "abaac", neededTime = [1,2,3,4,5]

Output: 3

Explanation: In the above image, 'a' is blue, 'b' is red, and 'c' is green.
Bob can remove the blue balloon at index 2. This takes 3 seconds.
There are no longer two consecutive balloons of the same color. Total time = 3.

Example 2:

![image](https://github.com/Shubh-Krishna/LeetCode_Q/assets/135266175/8fa236e3-d3ae-40a3-a2e7-2ca86868e2d3)


Input: colors = "abc", neededTime = [1,2,3]

Output: 0

Explanation: The rope is already colorful. Bob does not need to remove any balloons from the rope.

Example 3:

![image](https://github.com/Shubh-Krishna/LeetCode_Q/assets/135266175/47dd2e8e-2e92-4fd7-bdc8-531bcdd71803)


Input: colors = "aabaa", neededTime = [1,2,3,4,1]

Output: 2

Explanation: Bob will remove the balloons at indices 0 and 4. Each balloons takes 1 second to remove.
There are no longer two consecutive balloons of the same color. Total time = 1 + 1 = 2.
 

Constraints:

n == colors.length == neededTime.length

1 <= n <= 105

1 <= neededTime[i] <= 104

colors contains only lowercase English letters.
