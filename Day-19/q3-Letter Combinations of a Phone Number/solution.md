## Letter Combinations of a Phone Number

C++ Code
```
cpp
class Solution {
public:
    vector<string> str={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

    void solve(vector<string> &ans,string digits,int index,string st){
            if(index==digits.size()){
                ans.push_back(st);
                return;
            } 

            int idx=digits[index]-'0';

            for(auto it:str[idx]){
                st.push_back(it);
                solve(ans,digits,index+1,st);
                st.pop_back();
            }

    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if(digits.size()==0) return ans;
        solve(ans,digits,0,"");
        return ans;

    }
};
