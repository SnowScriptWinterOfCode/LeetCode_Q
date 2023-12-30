# D1Q1: Product of an Array
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

Example 1:
Input: nums = [1,2,3,4]
Output: [24,12,8,6]

Example 2
Input: nums = [-1,1,0,-3,3]
Output: [0,0,9,0,0]


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

## Solution:

### C++
```
vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int> l_prod(n);
        vector<int> r_prod(n);
        vector<int> ans;
         l_prod[0]=1;
         r_prod[n-1]=1;
    
        for(int i=1;i<n;i++){
            l_prod[i]=l_prod[i-1]*nums[i-1];
 }
             
        for(int i=n-2;i>=0;i--){
            r_prod[i]=r_prod[i+1]*nums[i+1];
 }
 
       for(int i=0;i<n;i++){
           ans.push_back(l_prod[i]*r_prod[i]);
        
 }


  return ans;      
}
```