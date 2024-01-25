```
class Solution {
    public int numberOfBeams(String[] bank) {
        int ans=0;
        int temp=0;
        for(int i=0;i<bank.length;i++){
            String str=bank[i];
            int n=str.replaceAll("[^1]", "").length();
            if(n==0){
                continue;
            }
            ans+=temp*n;
            temp=n;
        }
        return ans;
        
    }
}
```
