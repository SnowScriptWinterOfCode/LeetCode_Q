#include <bits/stdc++.h>

using namespace std;

class Solution {
public:

    int maxLength(vector<string>& arr) {
        int max_length = 0;
        backtrack(arr, 0, "", max_length);
        return max_length;
    }

private:
    void backtrack(const vector<string>& arr, int start, const string& current, int& max_length) {
        if (isUnique(current)) {
            max_length = max(max_length, static_cast<int>(current.length()));
        }

        for (int i = start; i < arr.size(); ++i) {
            backtrack(arr, i + 1, current + arr[i], max_length);
        }
    }

    bool isUnique(const string& s) {
        unordered_set<char> charSet;
        for (char ch : s) {
            if (charSet.count(ch) > 0) {
                return false;  
            }
            charSet.insert(ch);
        }
        return true;  
    }
};
