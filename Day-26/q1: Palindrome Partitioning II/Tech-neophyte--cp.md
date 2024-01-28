## Approach 1: Using recursion
## cpp code
```
class Recursion {
private:
    int n;
    bool isPalindrome(string& s, int l, int r)
    {
        while(l < r)
        {
            if(s[l++] != s[r--])
            {
                return false;
            }
        }
        return true;
    }
    int solve(string& s, int idx)
    {
        if(idx >= n)
        {
            return 0;
        }
        int minSteps = INT_MAX;
        for(int k=idx; k<n; k++)
        {
            if(isPalindrome(s, idx, k))
            {
                int steps = 1 + solve(s, k+1);
                minSteps = min(minSteps, steps);
            }
        }
        return minSteps;
    }
public:
    int minCut(string s) {
        n = s.size();
        return solve(s, 0) - 1;
    }
};
```
## Approach 2: Using dp and memorisatiom
<br /> Step 1: Take all substrings and check that it is palindrome or not and store in check matrix.
<br /> Step 2: For each i, store all indexes such that s[i]....s[j] is a palindrome.
<br /> Step 3: Now apply dp with memoisation to find minimum partitions.
## CPP code
```
class Solution {
public:
    vector<int> adj[2005];
    int dp[2005];
    int help(int i,int n){
        if(i==n){
            return 0;
        }
        if(dp[i]!=-1){
            return dp[i];
        }
        int ans=1e9;
        for(auto x:adj[i]){
            int tmp=1+help(x+1,n);
            ans=min(ans,tmp);
        }
        return dp[i]=ans;
    }
    int minCut(string s) {
        int n=s.size();
        int check[n][n];      
        for(int g=0;g<n;g++){
            for(int i=0,j=g;j<n;i++,j++){
                if(g==0){
                    check[i][j]=1;
                }
                else if(g==1){
                    check[i][j]=(s[i]==s[j]);
                }
                else{
                    check[i][j]=(check[i+1][j-1]==1 ? (s[i]==s[j] ? 1 : 0) : 0);
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(check[i][j]){
                    adj[i].push_back(j);
                }
            }
        }

        memset(dp,-1,sizeof(dp));
        return help(0,n)-1;       
    }  
};
```
## Python code:
```
# python code

class Solution(object):
    def minCut(self, s):
        """
        s="abcgcbafj"
        :type s: str
        :rtype: int
        """
      
        if s == s[::-1]:
            return 0
        
        for i in range(len(s)):
            if s[:i] == s[:i][::-1] and s[i:] == s[i:][::-1]:
                return 1
        
        l=len(s)
      
        #d=[[0 for i  in range(l)] for j in range(l)]
        x=[[0 for i  in range(l)] for j in range(l)]
        for i in range(l):
          for j in range(i,l):
            st=s[i:j+1]
            #d[i][j]=st
            x[i][j]= (st==st[::-1])
                      
            
        p=[0 for c in range(l)]
        for i in range(1,l):
          if x[0][i]:
            p[i]=0
          else:
            m=float("inf")
            for j in range(i,0,-1):
              if x[j][i]: 
                m=min(m,p[j-1])
            p[i]=m+1
        return p[-1]
  
```
