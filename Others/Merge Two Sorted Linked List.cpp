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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp1 = list1 ; 
        ListNode* temp2 = list2 ;
        ListNode* head3 = new ListNode;
        ListNode* temp3 = head3; 
        while (temp1 != nullptr && temp2 != nullptr){
            if (temp1->val < temp2 -> val){
                ListNode* NEWNODE = new ListNode;
                NEWNODE-> val = temp1->val;
                temp3 -> next = NEWNODE; 
                temp3=NEWNODE;
                temp1=temp1->next;
            }
            else{
                ListNode* NEWNODE = new ListNode;
                NEWNODE-> val = temp2->val;
                temp3 -> next = NEWNODE;
                temp3=NEWNODE;
                temp2=temp2->next;
            }
        }
        while(temp1!=nullptr){
            ListNode* NEWNODE = new ListNode;
            NEWNODE-> val = temp1->val;
            temp3 -> next = NEWNODE; 
            temp3=NEWNODE;
            temp1=temp1->next;
        }
        while(temp2!=nullptr){
            ListNode* NEWNODE = new ListNode;
            NEWNODE-> val = temp2->val;
            temp3 -> next = NEWNODE; 
            temp3=NEWNODE;
            temp2=temp2->next;
        }

        ListNode* temp = head3 ;
        head3 = head3->next; 
        delete(temp);
        return head3; 
    }
};
