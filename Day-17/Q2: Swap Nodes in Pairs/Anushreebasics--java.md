```
/**
 * Definition for singly-linked list.
 * public class ListNode {
 * int val;
 * ListNode next;
 * ListNode() {}
 * ListNode(int val) { this.val = val; }
 * ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode swapPairs(ListNode head) {
        if (head == null || head.next == null) {
            return head;
        }
        ListNode temp = head.next;
        head.next = temp.next;
        temp.next = head;
        head = temp;
        temp = head.next.next;
        ListNode prev = head.next;
        while (temp != null && temp.next != null) {
            ListNode t = temp.next;
            temp.next = t.next;
            t.next = temp;
            prev.next = t;
            prev = temp;

            temp = temp.next;
        }
        return head;
    }
}
```
