# Approach:
<br/> 1. The code traverses the linked list and checks if the current node's value is in numSet and the next node is either nullptr or its value is not in the set. 
<br/> 2. If these conditions are met, it increments the count.
```
class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums) {
        unordered_set<int> numSet(nums.begin(), nums.end());  
        int count = 0;
        ListNode* temp = head;

        while (temp != nullptr) {
            if (numSet.count(temp->val) && (temp->next == nullptr || !numSet.count(temp->next->val))) {
                // If the current node's value is in nums and the next node is not in nums, increment count
                count++;
            }
            temp = temp->next;
        }

        return count;
    }
};
```
