class Solution {
    public int nextGreaterElement(int n) {
        char[] number= (n+"").toCharArray();
        int idx=-1;
        for(int i=number.length-2;i>=0;i--){
            if(number[i]<number[i+1]){
                idx=i;
                break;
            }
        }
        if(idx==-1){
            return -1;
        }

        char val=number[idx];
        int smallestidx=idx+1;

        for(int i=idx+1;i<number.length;i++){
            if(number[i]>val && number[i]<=number[smallestidx]){
                smallestidx=i;
            }
        }
        char temp=number[idx];
        number[idx]=number[smallestidx];
        number[smallestidx]=temp;
        Arrays.sort(number,idx+1,number.length);
        long ans=Long.parseLong(new String(number));
        if(ans>Integer.MAX_VALUE){
            return -1;
        }
        else{
            return (int)ans;
        }
    }
}