public class namita0210_java{
        class ListNode {
        int val;
        ListNode next;

        ListNode(int val) {
            this.val = val;
        }
    }

    public class MergeSortedLists {
        public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
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

            // If one of the lists is not empty, append the remaining nodes
            if (list1 != null) {
                current.next = list1;
            } else {
                current.next = list2;
            }

            return dummy.next;
        }

        // Helper method to print the linked list
        public static void printList(ListNode head) {
            while (head != null) {
                System.out.print(head.val + " ");
                head = head.next;
            }
            System.out.println();
        }

        
    }

}