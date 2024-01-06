# Approach 1
<br/>1. Count the number of 0s and 1s
<br/>2. Calculate the least distance between misplaced 0 and index it should be present at and add it to the ans.
```
class Solution {
public:
    long long minimumSteps(string s) {
        int c1=0,c0=0;
        long long ans=0;
        for (char c:s){
            if (c=='0'){
                c0++;
            }
            else c1++;
        }
        if (c0==0){
            return 0;
        }
        int idx=c0-1;
        for(int i=s.size()-1;i>0;i--){
            if (s[i]=='0'){
                ans+=i-(idx);
                idx--;
            }

        }
        return ans;
    }
};
```
# Approach 2
<br/> 1. Generate expected string "s1" by sorting original string
<br/> 2. Compare and swap charcters if expected string and original string do not match
```
class Solution {
public:
    long long minimumSteps(string s) {
        string expected_s=s;
        sort(expected_s.begin(),expected_s.end()); 
        
        long long c=0;
        int n=s.length();
        
        int i=0, j=n-1;
        while(i<=j){
            while(j>=i && s[j]==s1[j]) j--;
            
            if(s[i] != expected_s[i]){
                swap(s[i],s[j]);
                c += (j-i);
            }else{
                i++;
            }
        }
        
        return c;
    }
};
```
