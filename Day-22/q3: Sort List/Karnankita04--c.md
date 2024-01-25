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
    ListNode* sortList(ListNode* head) {
        
        if(head == NULL)
            return nullptr ;
        ListNode* temp = head ;
        vector<int> arr ;
        while(temp!=NULL)
        {
            int value = temp->val ;
            arr.push_back(value) ;
            temp = temp->next ;
        }

        sort(arr.begin(),arr.end()) ;

        ListNode* output = new ListNode(arr[0]) ;
        ListNode* tem = output ;

        for(int i=1 ; i<arr.size() ; i++)
        {
            ListNode* nex = new ListNode(arr[i]) ;
            tem->next = nex ;
            tem = nex ;
        }
        return output ;

    }
};
```