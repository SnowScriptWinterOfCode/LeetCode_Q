# D2Q3: Length of Last Word

Given a string s consisting of words and spaces, return the length of the last word in the string.

A word is a maximal substring consisting of non-space characters only.

Example 1:
Input: s = "Hello World"
Output: 5
Explanation: The last word is "World" with length 5.

Example 2:
Input: s = " fly me to the moon "
Output: 4
Explanation: The last word is "moon" with length 4.

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
int lengthOfLastWord(string s) {
        int n=s.size();
        int count=0;
       
        for(int i=n-1;i>=0;i--){
            if(s[i]!=' '){
               count++;
            }
            
            else if(s[i]==' ' && count>0){
                return count;                
        }
        }
        return count;
}
```