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
    public ListNode reverse(ListNode head){
        if(head==null){
            return null;
        }
        ListNode temp=null;
        ListNode a=head;
        while(a!=null){
            ListNode b=a.next;
            a.next=temp;
            temp=a;
            a=b;
        }
        return temp;
    }
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
    public boolean isPalindrome(ListNode head) {
        ListNode mid=middle(head);
        ListNode nextToMid=mid.next;
        mid.next=null;
        ListNode head2=reverse(nextToMid);
        ListNode temp1=head;
        ListNode temp2=head2;
        while(temp1!=null && temp2!=null){
            if(temp1.val!=temp2.val){
                return false;
            }
            temp1=temp1.next;
            temp2=temp2.next;
        }
        return true;
    }
}
```
