
# D2Q1: Find Minimum in Rotated Sorted Array

Suppose an array of length n sorted in ascending order is rotated between 1 and n times. For example, the array nums = [0,1,2,4,5,6,7] might become:

    [4,5,6,7,0,1,2] if it was rotated 4 times.
    [0,1,2,4,5,6,7] if it was rotated 7 times.

Notice that rotating an array [a[0], a[1], a[2], ..., a[n-1]] 1 time results in the array [a[n-1], a[0], a[1], a[2], ..., a[n-2]].

Given the sorted rotated array nums of unique elements, return the minimum element of this array.

_NOTE: You must write an algorithm that runs in O(log n) time._

Example 1:

Input: nums = [3,4,5,1,2]
Output: 1
Explanation: The original array was [1,2,3,4,5] rotated 3 times.

Example 2:

Input: nums = [4,5,6,7,0,1,2]
Output: 0
Explanation: The original array was [0,1,2,4,5,6,7] and it was rotated 4 times.

Example 3:

Input: nums = [11,13,15,17]
Output: 11
Explanation: The original array was [11,13,15,17] and it was rotated 4 times. 

**Constraints:**

1. n == nums.length
2. 1 <= n <= 5000
3. -5000 <= nums[i] <= 5000
4. All the integers of nums are unique.
5. nums is sorted and rotated between 1 and n times.

## P.S Do not make changes here while creating a PR!! The solutions will be released from our end and added here.

How to add a solution:
1. In this particular folder, create a file named "githubUsername--language.md" 
[For example, if "bh-g" is creating a solution in Python, Java and C++ then filename should be "bh-g--JPC.md"]
[Similiarly, creating it for only a particular language for example Java would be: "bh-g--J.md"]
2. We will only consider unique approaches 
3. Even if you wish to submit solution in multiple languages such as Java, C++, Python, etc kindly create a single pull request only.
4. Solutions in the form of images will NOT be accepted.
5. Use "```" aka backticks to create a codeblock in your md files, just add them before and after your code 

The following effect is created by codeblocks and we highly recommend it for the sake of clarity. 

```
printf("Hello, World")
```