class Solution {
public:
    string reverseWords(string s) {
        // approach : 
        // 1. Reverse the whole string
        // 2. Reverse each word in the string, then append to the result 
        reverse(s.begin(),s.end()) ;
        istringstream issvar(s) ;
        string temp, result ;
        while(issvar >> temp)
        {
            reverse(temp.begin(),temp.end()) ;
            result = result+" "+temp ;
        }
        if(result!="")
        {
            result = result.substr(1) ;
        }

        return result ;
    }
};