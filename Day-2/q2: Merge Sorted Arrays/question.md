# D2Q2: Merge Sorted Arrays

You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

_**Example 1:**_
**Input:** nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
**Output:** [1,2,2,3,5,6]
**Explanation:** The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1.

_**Example 2:**_
**Input:** nums1 = [1], m = 1, nums2 = [], n = 0
**Output:** [1]
**Explanation:** The arrays we are merging are [1] and [].
The result of the merge is [1].

_**Example 3:**_
**Input:** nums1 = [0], m = 0, nums2 = [1], n = 1
**Output:** [1]
**Explanation:** The arrays we are merging are [] and [1].
The result of the merge is [1].
Note that because m = 0, there are no elements in nums1. The 0 is only there to ensure the merge result can fit in nums1.
 
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