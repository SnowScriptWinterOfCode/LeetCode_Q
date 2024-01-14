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
    ListNode* matches(ListNode* &head,int target){
        ListNode* temp = head; 
        ListNode* prev= temp; 
        while( temp->val!=target){
            prev= temp;
            temp=temp->next; 
        }
        ListNode* temp3 = temp;
        if (temp==head){
            ListNode* temp2= head;
            head=head->next;
           // delete(temp2);
        }
        else{
            prev->next=temp->next; 
            temp->next=nullptr; 
           // delete(temp);
        }
        return temp3; 
    }
    ListNode* swapPairs(ListNode* head) {
        vector <int> v ;
        ListNode* temp = head; 
        while(temp!=nullptr){
            v.push_back( temp->val);
            temp=temp->next;
        }
        int nodes = v.size();
        if (nodes==0 || nodes==1) return head; 
        int p1=0;
        int p2=1;

        //for (auto iter:v) cout<<iter<< " ";
        ListNode* temp2 = new ListNode(-1); 
        ListNode* head2 = temp2;
        while (p2<nodes && p1<nodes){
            ListNode* add1 = matches(head,v[p2]); 
            cout << add1->val;
            temp2->next = add1; 
            temp2= temp2->next; 
            ListNode* add2 = matches(head,v[p1]);
            cout << add2->val;
            temp2->next = add2; 
            temp2= temp2->next;
            
           /// cout << p1<<" " <<p2 << " ";
            p1+=2;
            p2+=2; 
          ///  cout << p1<<" " <<p2 << " ";
        }
        cout <<'k';
        ListNode* temp3 = head2; 
        head2=head2->next;
        delete(temp3); 
        return head2; 
    }
};
