class Solution {
    public int largestAltitude(int[] gain) {
        int[] pSum= new int[gain.length+1];
        pSum[0]=0;
        int max=Integer.MIN_VALUE;
        for(int i=1;i<=pSum.length-1;i++){
            pSum[i]=pSum[i-1]+gain[i-1];
        }
        for(int i=0;i<=pSum.length-1;i++){
            if(pSum[i]>max)
               max=pSum[i];
        }
        return max;
    }
}