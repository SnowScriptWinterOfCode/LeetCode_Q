#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int scoreOfParentheses(std::string s) {

        stack<int> stk;
        int score = 0;

        for (char c : s) {
            if (c == '(') {
                stk.push(score);
                score = 0;
            } else {
                score = stk.top() + max(2 * score, 1);
                stk.pop();
            }
        }

        return score;
    }
};
