```
import java.util.*;

public class d11q3 {
    static class Node {
        int val;
        Node left;
        Node right;

        Node() {
        }

        Node(int val) {
            this.val = val;
        }

        Node(int val, Node left, Node right) {
            this.val = val;
            this.left = left;
            this.right = right;
        }
    }

    public static Node construct(int s, int e, int[] nums) {
        if (s > e) {
            return null;
        }
        int maxi = Integer.MIN_VALUE;
        int id = -1;
        for (int i = s; i <= e; i++) {
            if (nums[i] > maxi) {
                maxi = nums[i];
                id = i;
            }
        }
        Node root = new Node(maxi);
        root.left = construct(s, id - 1, nums);
        root.right = construct(id + 1, e, nums);
        return root;
    }

    public static List<String> traverse(Node root) {
        Queue<Node> q = new LinkedList<>();
        List<String> al = new ArrayList<>();
        q.add(root);
        al.add(root.val + "");
        while (q.size() > 0) {
            int n = q.size();
            for (int i = 0; i < n; i++) {
                Node temp = q.remove();

                if (temp.left != null) {
                    al.add(temp.left.val + "");
                    q.add(temp.left);
                }
                if (temp.right != null) {
                    al.add(temp.right.val + "");
                    q.add(temp.right);
                }

            }
        }
        return al;
    }

    public static void main(String[] args) {
        int[] nums = { 3, 2, 1, 6, 0, 5 };
        Node root = construct(0, nums.length - 1, nums);
        List<String> ans = traverse(root);
        System.out.print("[");
        for (String str : ans) {
            System.out.print(str + ",");
        }
        System.out.print("]");
    }
}
```
