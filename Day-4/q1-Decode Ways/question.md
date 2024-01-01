
# D4Q1: Decode Ways:

A message containing letters from A-Z can be encoded into numbers using the following mapping:

'A' -> "1"
'B' -> "2"
...
'Z' -> "26"
To decode an encoded message, all the digits must be grouped then mapped back into letters using the reverse of the mapping above (there may be multiple ways). For example, "11106" can be mapped into:

"AAJF" with the grouping (1 1 10 6)
"KJF" with the grouping (11 10 6)
Note that the grouping (1 11 06) is invalid because "06" cannot be mapped into 'F' since "6" is different from "06".

Given a string s containing only digits, return the number of ways to decode it.

The test cases are generated so that the answer fits in a 32-bit integer.


Example 1:

Input: s = "12"
Output: 2
Explanation: "12" could be decoded as "AB" (1 2) or "L" (12).
Example 2:

Input: s = "226"
Output: 3
Explanation: "226" could be decoded as "BZ" (2 26), "VF" (22 6), or "BBF" (2 2 6).
Example 3:

Input: s = "06"
Output: 0
Explanation: "06" cannot be mapped to "F" because of the leading zero ("6" is different from "06").


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
