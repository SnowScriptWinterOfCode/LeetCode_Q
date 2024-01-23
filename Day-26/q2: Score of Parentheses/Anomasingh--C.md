Solution in C++ ->

class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int>st;
        int score = 0;
        for(auto ch: s)     //checking every character
        {
            if(ch =='(')    // if there is open parentheses
            {
                st.push(score);
                score = 0;           //Score will be 0
            }
            else
            {
                score = st.top()+max(2*score,1);  //condition given in question to calculate score
                st.pop();
            }
        }
        return score;
    }
};
