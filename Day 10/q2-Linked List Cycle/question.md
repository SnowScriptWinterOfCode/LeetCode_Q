Given `head`, the head of a linked list, determine if the linked list has a **cycle** in it.

_There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the `next` pointer._ Internally, `pos` is used to denote the index of the node that the tail's `next` pointer is connected to. Note that `pos` is not passed as a parameter.

Return `true` if there is a cycle in the linked list. Otherwise, return `false`.

_**Example 1:**_

![image](https://github.com/SnowScriptWinterOfCode/LeetCode_Q/assets/112773734/4c737fdf-3d0a-43f7-b3d7-15b4b270a040)

**Input**: head = [3,2,0,-4], pos = 1
**Output**: `true`
**Explanation**: There is a cycle in the linked list, where the tail connects to the 1st node (0-indexed).

**_Example 2:_**

![image](https://github.com/SnowScriptWinterOfCode/LeetCode_Q/assets/112773734/e3eb22c2-2bd7-462c-8755-2c76d77fe0e4)


**Input**: head = [1,2], pos = 0
**Output**: `true`
**Explanation**: There is a cycle in the linked list, where the tail connects to the 0th node.

**_Example 3:_**

![image](https://github.com/SnowScriptWinterOfCode/LeetCode_Q/assets/112773734/2fb9eeef-1473-42b3-beef-dcc9a2c99a7d)

**Input**: head = [1], pos = -1
**Output**: `false`
**Explanation**: There is no cycle in the linked list.

**Definition for singly-linked list.**
  ```
     struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };
```
