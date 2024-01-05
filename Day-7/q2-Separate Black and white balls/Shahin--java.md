class Solution {
    public long minimumSteps(String s) {
        char[] arr=s.toCharArray();
        long c=0;
        long ans=0;
        for(int i=arr.length-1;i>=0;i--){
            if(arr[i]=='0'){
                c++;
            }
            if(arr[i]=='1'){
                ans+=c;
            }
        }
        
        return ans;
    }
}