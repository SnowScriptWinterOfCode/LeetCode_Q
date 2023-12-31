class Solution {
    public List<Integer> majorityElement(int[] nums) {
        List<Integer> majorityElement=new ArrayList<>();
        int n=nums.length;
        int value1=nums[0];
        int count1=1;
        int value2=Integer.MIN_VALUE;
        int count2=0;
        for(int i=1;i<n;i++){
            if(nums[i]==value1){
                count1++;
            }
            else if(nums[i]==value2){
                count2++;
            }
            else if(count1==0){
                count1++;
                value1=nums[i];
            }
            else if(count2==0){
                count2++;
                value2=nums[i];
            }
            else{
                count1--;
                count2--;
            }
        } int c=0;
        for(int i=0;i<n;i++){
                if(nums[i]==value1){
                    c++;
                }
            }
        if(c>n/3){
            majorityElement.add(value1);
        }
        c=0;
        for(int i=0;i<n;i++){
                if(nums[i]==value2){
                    c++;
                }
            }
        if(c>n/3){
            majorityElement.add(value2);
        }
      
        return majorityElement;
    }
}