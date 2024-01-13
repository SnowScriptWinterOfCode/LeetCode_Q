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
    ListNode* swapPairs(ListNode* head)
     {
     if(head==NULL) return NULL;
        if(head->next==NULL) return head;
        if(head->next->next==NULL){
            ListNode* temp=head->next;
            head->next->next=head;
            head->next=NULL;
            return temp;
        }
        ListNode* n=head->next;
        head->next=rec(head->next->next);
        n->next=head;
        return n;
    }
    ListNode* rec(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;
        return swapPairs(head);

    }
};