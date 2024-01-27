```
class Solution {
    public int helper(String s, int id,int[] dp){
        if(id==s.length()){
            return 1;
        }
        if(dp[id]!=-1){
            return dp[id];
        }
        if(s.charAt(id)=='0'){
            return 0;
        }
        int ways=helper(s,id+1,dp);
        if(id+1<s.length() && Integer.parseInt(s.substring(id,id+2))<=26){
            ways+=helper(s,id+2,dp);
        }
        dp[id]=ways;
        return ways;
    }
    public int numDecodings(String s) {
        int[] dp=new int[s.length()];
        Arrays.fill(dp,-1);
        return helper(s,0,dp);
    }
}
```
