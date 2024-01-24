## Cpp code: merge sort
```
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    /// Merge Function

    ListNode *mergeList(ListNode *l1, ListNode *l2){
        ListNode *prev=new ListNode(-1), *curr=prev;
        while(l1 and l2){
            if(l1->val<=l2->val){
                curr->next=l1;
                l1=l1->next;
            }else{
                curr->next=l2;
                l2=l2->next;
            }
        curr=curr->next;
        }
        if(l1){
            curr->next=l1;
            l1=l1->next;
        }
        if(l2){
            curr->next=l2;
            l2=l2->next;
        }
    return prev->next;
    }

    /// Divide and Conquer Approach (Merge Sort)

    ListNode* sortList(ListNode* head){
        if(!head or !head->next) return head;
        ListNode *slow=head, *fast=head, *temp=NULL;
        while(fast and fast->next){
            temp=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        temp->next=NULL;

        ListNode *point1=sortList(head), *point2=sortList(slow);
    return mergeList(point1,point2);        
    }
};
```
## Python code: (Using lists)
```
class Solution:
    def sortList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        curr = head
        l =[]
        while curr:
            l.append(curr.val)
            curr = curr.next
        l.sort()
        curr = head
        for i in l:
            curr.val = i
            curr = curr.next
        return head
```
