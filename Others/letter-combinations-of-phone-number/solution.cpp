class Solution {
public:
    vector<string>ans_string;
    void solve(unordered_map<int,string>&mp, string output,string digits,int inx){
        if(inx==digits.size()){
            ans_string.push_back(output);
            return;
        }
        int d=digits[inx]-'0';
        string s=mp[d];
        for(int i=0;i<s.size();i++){
            output.push_back(s[i]);
            solve(mp,output,digits,inx+1);
            output.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.empty())return ans_string;
        unordered_map<int,string>mp;
        mp[2]="abc";
        mp[3]="def";
        mp[4]="ghi";
        mp[5]="jkl";
        mp[6]="mno";
        mp[7]="pqrs";
        mp[8]="tuv";
        mp[9]="wxyz";
        solve(mp,"",digits,0);
        return ans_string;
    }
};
