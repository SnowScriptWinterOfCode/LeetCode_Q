```
class Solution {
    public int scoreOfParentheses(String s) {
        Stack<Integer> st=new Stack<>();
        int ans=0;
        for(int i=0;i<s.length();i++){
            char ch=s.charAt(i);
            if(ch=='('){
                st.push(ans);
                ans=0;
            }
            else{
                ans=st.pop()+Math.max(2*ans,1);
            }
        }
        return ans;
    }
}
```
