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
    public ListNode middle(ListNode head){
        if(head==null){
            return null;
        }
        ListNode s=head;
        ListNode f=head;
        while(f.next!=null && f.next.next!=null){
            s=s.next;
            f=f.next.next;
        }
        return s;
    }
    public ListNode merge(ListNode left, ListNode right){
        if(left==null){
            return right;
        }
        if(right==null){
            return left;
        }
        if(left.val<=right.val){
            left.next=merge(left.next,right);
            return left;
        }
        else{
            right.next=merge(left,right.next);
            return right;
        }
    }
    public ListNode sortList(ListNode head) {
        if(head==null || head.next==null){
            return head;
        }
        ListNode mid=middle(head);
        ListNode nextToMid=mid.next;
        mid.next=null;
        // nextToMid.next=null;
        ListNode l=sortList(head);
        ListNode r=sortList(nextToMid);
        return merge(l,r);
    }
}
```
