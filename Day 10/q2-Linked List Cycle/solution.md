##  Approach 1
### Using hashing

We need to keep track of all the nodes we have visited till now so that once we visit the same node again we can say that a cycle is detected. 
The process is as follows:

1. Use a hash table for storing nodes. 
2. Start iterating through the lists.
3. If the current node is present in the hash table already, this indicates the cycle is present in the linked list and returns `true`.
4. Else move insert the node in the hash table and move ahead.
5. If we reach the end of the list, which is NULL, then we can say that the given list does not have a cycle in it and hence we return `false`.

### Complexity Analysis

`Time complexity`: O(n)

`Space complexity`: O(n)

### C++ Code
```
class Solution {
public:
    unordered_map<ListNode*,int> mp;
    bool hasCycle(ListNode *head) {
        while(head!=NULL){
            if(mp.find(head) == mp.end()){
                mp[head]++;
            }
            else{
                return true;
            }
            head=head->next;
        }
        return false;
    }
};

```

## Approach 2
### Floyd’s Cycle-Finding Algorithm 

We will use two pointers with different steps forward. 
The process is as follows: 

1. We will take two pointers, namely fast and slow. 
Fast pointer takes 2 steps ahead and slow pointer takes 2 points ahead.
2. Iterate through the list until the fast pointer is equal to NULL. This is because NULL indicates that there is no cycle present in the given list.
3. Cycle can be detected when fast and slow pointers collide.

### Complexity Analysis 

`Time complexity`: O(n)

`Space complexity`: O(1)

### C++ Code

```
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL){
            return false;
        }
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                return true;
            }
        }
        return false;
    }
};
```
