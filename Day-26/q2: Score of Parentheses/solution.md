## Approach - Stacks
1. Take a Stack, Iterate over the characters of string.
2. For every `ith` character check if the character is `(` or not. If found to be true, then insert the character score into the stack.
3. Initialize a stack to store the current traversed character score of inner balanced parenthesis.
4. For every `i` check for the conditions: 
  - if the current character is `(` push the current score into stack, enter the next inner layer and reset score to `0`.
  - if the current character is `)` then `ind` score will be doubled and will be at least one.
  - we exit the current level and set `ind = stack.top() + max(ind * 2, 1)`.
  - pop the score from the stack.

## Complexity Analysis

`Time Complexity`: O(N)

`Space Complexity`: O(N)

## C++ Code

```
class Solution {
public:
    int scoreOfParentheses(string s) {
        
        stack<int> st;
        int ind = 0;
        
        for(auto i : s)
        {
			// if we find open parenthesis
			// push the current score into the stack
            if(i == '(')
            {
                st.push(ind);
				// reset the score to 0
                ind = 0;
            }
            else // if we find close parenthesis
            {
                ind = st.top() + max(ind*2 ,1);
                st.pop();
            }
                
        }
        return ind;
        
    }
};
```
