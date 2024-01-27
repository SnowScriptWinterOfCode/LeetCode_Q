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
        if(nums.length==1){
            return 1;
        }
        Set<Integer> hs=new HashSet<>();
        for(int i: nums){
            hs.add(i);
        }
        int ans=0;
        boolean comp=false;
        while(head!=null){
            
            if(hs.contains(head.val) && !comp){
                comp=true;
            
                ans++;
            }
            else if(!hs.contains(head.val) && comp){
                comp=false;
            }
            head=head.next;
        }
        return ans;
    }
}
```
