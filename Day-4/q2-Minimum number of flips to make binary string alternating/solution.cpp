
class Solution {
public:
    int minFlips(string s) {
        int n = s.size();
        int ans1 = 0, ans2 = 0, ans = INT_MAX;
        for(int i = 0; i < 2 * n; i++) {
            if(i < n) s[i] -= '0'; 
            if(i % 2 != s[i % n]) ++ans1;
            if((i + 1) % 2 != s[i % n]) ++ans2;
            if(i >= n) {
                if((i - n) % 2 != s[i - n]) --ans1;
                if((i - n + 1) % 2 != s[i - n]) --ans2;
            }
            if(i >= n - 1)
                ans = min({ans1, ans2, ans});
        }
        return ans;
    }
};
