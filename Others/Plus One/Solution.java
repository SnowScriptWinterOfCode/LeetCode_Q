class Solution {
    StringBuilder s=new StringBuilder();
    public int[] plusOne(int[] digits) {
        for(int i=(digits.length)-1;i >= 0;i--){
            if(digits[i]<9){
                digits[i]=digits[i]+1;
                return digits;
            }else if(digits[i]==9){
                digits[i]=0;
            }   
        }
        int[] newarr=new int[digits.length+1];
        newarr[0]=1;
        return newarr;
    }
}