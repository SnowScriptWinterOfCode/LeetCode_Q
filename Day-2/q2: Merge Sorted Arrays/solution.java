import java.util.*;

public class day2_q2_solution {
    public static int[] func(int[] nums1,int m, int[] nums2,int n) {
        List<Integer> l = new ArrayList<>();
        int i = 0;
        int j = 0;
        while (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                l.add(nums1[i]);
                i++;
            } else {
                l.add(nums2[j]);
                j++;
            }
        }
        while (i < m) {
            l.add(nums1[i]);
            i++;
        }
        while (j < n) {
            l.add(nums2[j]);
            j++;
        }

        int[] ans = new int[l.size()];
        for (int x = 0; x < l.size(); x++) {
            ans[x] = l.get(x);
        }
        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt();
        int[] nums1 = new int[m];
        for (int i = 0; i < m; i++) {
            nums1[i] = sc.nextInt();
        }

        int n = sc.nextInt();
        int[] nums2 = new int[n];
        for (int i = 0; i < n; i++) {
            nums2[i] = sc.nextInt();
        }

        // int m=3;
        // int[] nums1={1,2,3,0,0,0};
        // int n=3;
        // int[] nums2={2,5,6};

        // int m=1;
        // int[] nums1={1};
        // int n=0;
        // int[] nums2={};

        // int m=0;
        // int[] nums1={0};
        // int n=1;
        // int[] nums2={1};

        int[] ans = func(nums1,m, nums2,n);
        System.out.print("[");
        for (int i = 0; i < ans.length; i++) {
            System.out.print(ans[i]+",");
        }
        System.out.print("]");
    }
}
