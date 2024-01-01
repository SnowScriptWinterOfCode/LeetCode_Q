class Solution {
public:
    bool isValid(string s) {
       stack<char> temp;
    for (int i = 0; i < s.length(); i++) {
        if (temp.empty()) {
             
            // If the stack is empty 
            // just push the current bracket
            temp.push(s[i]);
        }
        else if ((temp.top() == '(' && s[i] == ')')
                 || (temp.top() == '{' && s[i] == '}')
                 || (temp.top() == '[' && s[i] == ']')) {
             
            // If we found any complete pair of bracket
            // then pop
            temp.pop();
        }
        else {
            temp.push(s[i]);
        }
    }
    if (temp.empty()) {
         
        // If stack is empty return true
        return true;
    }
    return false;
}
        
    
};