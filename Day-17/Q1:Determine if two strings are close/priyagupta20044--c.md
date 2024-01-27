class Solution {
public:
    bool closeStrings(string word1, string word2) {
        if (word1.length()!=word2.length()) return false;
        map<char,int>m1; 
        map<char,int>m2; 
        map<int,int>m3; 
        map<int,int>m4; 

        for (int i=0;i<word1.length();i++) m1[word1[i]]++;
        for (int i=0;i<word2.length();i++) m2[word2[i]]++;

        for (auto iter: m1) m3[iter.second]++;
        for (auto iter: m2) m4[iter.second]++;

        for (auto iter:m1){
            if (m2.find(iter.first) == m2.end()) return false;
        }
        for (auto iter:m3){
            if (m4.find(iter.first) == m4.end()){
                return false; 
            }
            else{
                if (iter.second != m4[iter.first])
                return false;
            }
        }
        return true;
    }
};
