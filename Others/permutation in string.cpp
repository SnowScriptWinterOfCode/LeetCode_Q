class Solution {
public:
    bool check(map<char,int>mp1, map<char,int>mp2){
        for (auto it:mp1){
            if (mp2.find(it.first) == mp2.end()){
                return false;
            }
            else if (mp2.find(it.first) != mp2.end() && mp2[it.first]!=it.second){
                return false;
            }
        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        if (s2.length()<s1.length()){
            return false;
        }
        int window = s1.length(); 
        map<char,int>mp1; 
        map<char,int>mp2; 
        for (int i=0; i<window;i++){
            mp1[s1[i]]++;
            mp2[s2[i]]++;
        }
        int ptr1 = 0; 
        int ptr2 = s1.length()-1; 

        while(ptr2<s2.length()){
            bool ans = check(mp1,mp2);
            if (ans) return true;
            mp2[s2[ptr1]]--;
            mp2[s2[ptr2+1]]++;
            ptr2++;
            ptr1++;
        }
        return false; ;
    }
};
