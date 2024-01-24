```
class Solution {
public:
    string longestPalindrome(string s) {
         int maxi=0;
        string ans = "";
        ans += s[0];
        for(int i=1; i<s.length()-1; i++){
            if(s[i-1] == s[i+1]){
                int start = i-1, end = i+1;
                while(start-1>=0 && end+1 < s.length() && s[start-1] == s[end+1]){
                    start--, end++;
                }
                if(maxi < end-start+1){
                    maxi = end-start+1;
                    ans = s.substr(start, maxi);
                }
            }
        }
        for(int i=1; i<s.length(); i++){
            if(s[i-1]== s[i]){
                int start = i-1, end = i;
                while(start-1>=0 && end+1 < s.length() && s[start-1] == s[end+1]){
                    start--, end++;
                }
                if(maxi < end-start+1){
                    maxi = end - start +1;
                    ans = s.substr(start, maxi);
                }
            }
        }

        return ans;
    }
};
```
