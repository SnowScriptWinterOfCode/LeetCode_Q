```
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public int numComponents(ListNode head, int[] nums) {
        HashSet<Integer> hs = new HashSet<>();
        int count = 1;

        for(int i = 0; i < nums.length; i++)
            hs.add(nums[i]);

        boolean bool = true;
        boolean bool1 = true;

        while(head != null){
            if(!hs.contains(head.val) && bool){
                count++;
                bool = false;
            }
            else if(hs.contains(head.val))
                bool = true;

            if(head.next == null && !hs.contains(head.val))
                count--;

            if(bool1 && !hs.contains(head.val))
                count--;

            bool1 = false;

            head = head.next;
        }

        return count;
    }
}

```