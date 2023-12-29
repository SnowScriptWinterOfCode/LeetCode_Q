import java.util.*;

public class day2_q1_solution {
    public static int func(int[] arr){
        // if it is sorted
        if(arr[0]<arr[arr.length-1]){
            return arr[0];
        }
        // if it is rotated
        int s=0;
        int e=arr.length-1;
        while (s<=e) {
            int mid=(s+e)/2;
            if (arr[mid]>arr[0]) {
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        return arr[s];
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt();
        int[] nums = new int[m];
        for (int i = 0; i < m; i++) {
            nums[i] = sc.nextInt();
        }

        // int[] nums={4,5,6,7,0,1,2};
        // int[] nums={3,4,5,1,2};
        // int[] nums={11,13,15,17};
        System.out.println(func(nums));
    }
}
