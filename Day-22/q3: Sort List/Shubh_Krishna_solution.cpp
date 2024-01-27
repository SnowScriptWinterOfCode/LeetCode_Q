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
