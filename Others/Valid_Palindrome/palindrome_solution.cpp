class Solution {
public:
    bool isAlphaNumeric(char c){
        return c>='a' && c<='z' ||
        c>='A' && c<= 'Z' || c>='0'&& c<='9'; 
    }
    char tolower(char c){
        if(c>='a' && c<='z' || c>='0'&& c<='9')
            return c;
        return c - 'A' + 'a';
    }
    bool isPalindrome(string s) {
        int n = s.size();
        if(n==0)return true;
        int i=0,j=n-1;
        while(i<j){
            if(!isAlphaNumeric(s[i])){
                i++;

            }else if(!isAlphaNumeric(s[j])){
                j--;
            }else{
                if(tolower(s[i]) != tolower(s[j])){
                    return false;
                }
                i++;
                j--;
            }
        }
        return true;
    }

};
