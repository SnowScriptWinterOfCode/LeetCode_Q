![image](https://github.com/Ipshita-Tandon/LeetCode_Q/assets/120296010/b8ed45a0-6894-4563-9e0e-1590bff8229a)

We are given an array asteroids of integers representing asteroids in a row.

For each asteroid, the absolute value represents its size, and the sign represents its direction (positive meaning right, negative meaning left). Each asteroid moves at the same speed.

Find out the state of the asteroids after all collisions. If two asteroids meet, the smaller one will explode. If both are the same size, both will explode. Two asteroids moving in the same direction will never meet.

Example 1:<br>
Input: asteroids = [5,10,-5]<br>
Output: [5,10]<br>
Explanation: The 10 and -5 collide resulting in 10. The 5 and 10 never collide.

Example 2:<br>
Input: asteroids = [8,-8]<br>
Output: []<br>
Explanation: The 8 and -8 collide exploding each other.

Example 3:<br>
Input: asteroids = [10,2,-5]<br>
Output: [10]<br>
Explanation: The 2 and -5 collide resulting in -5. The 10 and -5 collide resulting in 10.

Constraints:

1. 2 <= asteroids.length <= 104<br>
2. -1000 <= asteroids[i] <= 1000<br>
3. asteroids[i] != 0
