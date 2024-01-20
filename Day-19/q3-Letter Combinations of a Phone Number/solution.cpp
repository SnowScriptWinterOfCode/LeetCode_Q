class Solution {
public:
    void generate(string &digits, int i,string &t, vector<string>&ans, vector<vector<char>>&m){
        if(i==digits.size()){
            ans.push_back(t);
            return;
        }
        for(int j=0;j<m[digits[i]-'2'].size();j++){
            t+=m[digits[i]-'2'][j];
            generate(digits,i+1,t,ans,m);
            t.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        int n=digits.size();
        if(n==0)return ans;
        vector<vector<char>>m;
        m.push_back({'a','b','c'});
        m.push_back({'d','e','f'});
        m.push_back({'g','h','i'});
        m.push_back({'j','k','l'});
        m.push_back({'m','n','o'});
        m.push_back({'p','q','r','s'});
        m.push_back({'t','u','v'});
        m.push_back({'w','x','y','z'});
        string t="";
        generate(digits,0,t,ans,m);
        return ans;
    }
};
