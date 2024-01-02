    int lengthOfLongestSubstring(string s) {
    unordered_map<char, int> ans;
    int maxi = 0;
    int left = 0;
    int right = 0;
    while (right < s.length()) {
        if (ans.count(s[right]) && ans[s[right]] >= left) {
            left = ans[s[right]] + 1;
        }
        ans[s[right]] = right;
        right++;
        maxi = max(maxi, right - left);
    }
    return maxi;
}
