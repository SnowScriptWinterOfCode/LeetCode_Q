# D3Q3: Combination Sum
Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target. You may return the combinations in any order.

The same number may be chosen from candidates an unlimited number of times. Two combinations are unique if the frequency of at least one of the chosen numbers is different.

The test cases are generated such that the number of unique combinations that sum up to target is less than 150 combinations for the given input.

Example 1:
Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]

Explanation:
2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
7 is a candidate, and 7 = 7.
These are the only two combinations.

Example 2:
Input: candidates = [2,3,5], target = 8
Output: [[2,2,2,2],[2,3,3],[3,5]]

Example 3:
Input: candidates = [2], target = 1
Output: []
 

Constraints:
1 <= candidates.length <= 30
2 <= candidates[i] <= 40
All elements of candidates are distinct.
1 <= target <= 40

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
