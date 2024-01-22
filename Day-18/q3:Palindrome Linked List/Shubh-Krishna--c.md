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
    bool isPalindrome(ListNode* head) {
        ListNode *s=head;
        int i=0;
        while (s != nullptr){
            i++;
            s=s->next;
        }
        s = head;
        int arr[i];
        for (int j=0;j<i;j++){
            arr[j]=s->val;
            s=s->next;
        }
        for (int a = 0, b = i - 1; a < b; a++, b--) {
            if (arr[a] != arr[b]) {
                return false;
            }
        }
        return true;
    }
};
```
