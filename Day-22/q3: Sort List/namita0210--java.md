```
class ListNode {
    int val;
    ListNode next;
    ListNode() {}
    ListNode(int val) { this.val = val; }
    ListNode(int val, ListNode next) { this.val = val; this.next = next; }
}

public class SortLinkedList {

    public ListNode sortList(ListNode head) {
        if (head == null || head.next == null) {
            return head; // Already sorted if the list is empty or has only one node
        }

        // Find the middle of the linked list
        ListNode middle = findMiddle(head);

        // Split the linked list into two halves
        ListNode secondHalf = middle.next;
        middle.next = null;

        // Recursively sort the two halves
        ListNode sortedFirstHalf = sortList(head);
        ListNode sortedSecondHalf = sortList(secondHalf);

        // Merge the sorted halves
        return merge(sortedFirstHalf, sortedSecondHalf);
    }

    private ListNode findMiddle(ListNode head) {
        ListNode slow = head;
        ListNode fast = head;

        while (fast != null && fast.next != null && fast.next.next != null) {
            slow = slow.next;
            fast = fast.next.next;
        }

        return slow;
    }

    private ListNode merge(ListNode list1, ListNode list2) {
        ListNode dummy = new ListNode(0);
        ListNode current = dummy;

        while (list1 != null && list2 != null) {
            if (list1.val < list2.val) {
                current.next = list1;
                list1 = list1.next;
            } else {
                current.next = list2;
                list2 = list2.next;
            }
            current = current.next;
        }

        if (list1 != null) {
            current.next = list1;
        }

        if (list2 != null) {
            current.next = list2;
        }

        return dummy.next;
    }

    // Helper method to print the linked list
    private void printList(ListNode head) {
        while (head != null) {
            System.out.print(head.val + " ");
            head = head.next;
        }
        System.out.println();
    }

    
}

```