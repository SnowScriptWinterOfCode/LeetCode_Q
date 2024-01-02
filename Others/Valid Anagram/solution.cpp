    bool isAnagram(string s, string t) {
        map<char,int> sol;
        if(s.length() != t.length()){
            return false;
        }
        for(int i =0;i<s.length();i++){
            sol[s[i]]++;
        }
        for(int i =0;i<s.length();i++){
            sol[t[i]]--;
        }
        for(auto it = sol.begin();it!=sol.end();it++){
            if(it->second > 0){
                return false;
            }
        }
        return true;
    }
