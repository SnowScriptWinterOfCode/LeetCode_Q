# Linked List Cycle
Given head, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.

Return true if there is a cycle in the linked list. Otherwise, return false.

 

Example 1:

![image](https://github.com/Shubh-Krishna/LeetCode_Q/assets/135266175/2742dcc2-e409-4d1d-939a-fb2289e427d9)


Input: head = [3,2,0,-4], pos = 1

Output: true

Explanation: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).

Example 2:

![image](https://github.com/Shubh-Krishna/LeetCode_Q/assets/135266175/4b762423-a6b6-4d9b-b9ef-e55cb504834c)


Input: head = [1,2], pos = 0

Output: true

Explanation: There is a cycle in the linked list, where the tail connects to the 0th node.

Example 3:

![image](https://github.com/Shubh-Krishna/LeetCode_Q/assets/135266175/03c32992-61e0-4a43-b8b8-93461789037c)


Input: head = [1], pos = -1

Output: false

Explanation: There is no cycle in the linked list.
 
