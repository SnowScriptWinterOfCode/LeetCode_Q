class Solution {
public:
    bool isPalindrome(string s) {
        string filtered_string ;
        for(auto ch: s)
        {
            if(isalnum(ch))
            {
                filtered_string+= tolower(ch) ;
            }
        }

        string reversed_string = filtered_string ;
        reverse(reversed_string.begin(),reversed_string.end()) ;
        if(reversed_string == filtered_string)
            return true ;
        return false ;               
    }
};