class Solution {
public:
    string longestPalindrome(string s) {
        if (s == string(s.rbegin(), s.rend())) {
            return s;
        }

        string left = longestPalindrome(s.substr(1));
        string right = longestPalindrome(s.substr(0, s.size() - 1));

        if (left.length() > right.length()) {
            return left;
        } else {
            return right;
        }
    }
};