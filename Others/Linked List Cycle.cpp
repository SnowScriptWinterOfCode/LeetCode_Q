/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head; 
        if (!head) return false; 

        while(slow!=nullptr && fast!=nullptr){
            fast=fast->next; 
            if (fast!=nullptr){
                fast=fast->next; 
            }
            slow=slow->next; 

            if(slow==fast) return true;
        }
        return false;
    }
};
