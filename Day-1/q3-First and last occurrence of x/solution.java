public class day1_q3_solution {
    public static int first(int[] nums, int x){
        int ans=-1;
        int i=0;
        int j=nums.length-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(nums[mid]>=x){
                ans=mid;
                j=mid-1;
            }
            else{
                i=mid+1;
            }
        }
        return ans;
    }
    public static int last(int[] nums, int x){
        int ans=-1;
        int i=0;
        int j=nums.length-1;
        while(i<=j){
            int mid=(i+j)/2;
            if(nums[mid]<=x){
                ans=mid;
                i=mid+1;
            }
            else{
                j=mid-1;
            }
        }
        return ans;
    }
    public static void main(String[] args) {
        int x=5;
        int[] nums={1, 3, 5, 5, 5, 5, 67, 123, 125};
        System.out.println(first(nums,x)+" "+last(nums,x));
    }
}
