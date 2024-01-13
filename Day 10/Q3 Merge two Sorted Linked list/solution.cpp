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
#include <iostream>

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

// Function to merge two sorted linked lists
ListNode* mergeSortedLists(ListNode* l1, ListNode* l2) {
    ListNode* dummy = new ListNode(0);
    ListNode* current = dummy;

    while (l1 != nullptr && l2 != nullptr) {
        if (l1->val < l2->val) {
            current->next = l1;
            l1 = l1->next;
        } else {
            current->next = l2;
            l2 = l2->next;
        }
        current = current->next;
    }

    if (l1 != nullptr) {
        current->next = l1;
    } else {
        current->next = l2;
    }

    ListNode* mergedList = dummy->next;
    delete dummy;

    return mergedList;
}

// Function to print the linked list
void printList(ListNode* head) {
    while (head != nullptr) {
        std::cout << head->val << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

int main() {
    // Input for the first linked list
    int n;
    std::cout << "Enter the number of elements for the first linked list: ";
    std::cin >> n;

    ListNode* list1 = nullptr;
    ListNode* tail1 = nullptr;

    std::cout << "Enter sorted elements for the first linked list: ";
    for (int i = 0; i < n; ++i) {
        int val;
        std::cin >> val;

        if (!list1) {
            list1 = tail1 = new ListNode(val);
        } else {
            tail1->next = new ListNode(val);
            tail1 = tail1->next;
        }
    }

    // Input for the second linked list
    int m;
    std::cout << "Enter the number of elements for the second linked list: ";
    std::cin >> m;

    ListNode* list2 = nullptr;
    ListNode* tail2 = nullptr;

    std::cout << "Enter sorted elements for the second linked list: ";
    for (int i = 0; i < m; ++i) {
        int val;
        std::cin >> val;

        if (!list2) {
            list2 = tail2 = new ListNode(val);
        } else {
            tail2->next = new ListNode(val);
            tail2 = tail2->next;
        }
    }

    // Merge the two sorted linked lists
    ListNode* mergedList = mergeSortedLists(list1, list2);

    // Print the merged list
    std::cout << "Merged List: ";
    printList(mergedList);

    // Cleanup: Free the memory allocated for the linked lists
    while (list1) {
        ListNode* temp = list1;
        list1 = list1->next;
        delete temp;
    }

    while (list2) {
        ListNode* temp = list2;
        list2 = list2->next;
        delete temp;
    }

    while (mergedList) {
        ListNode* temp = mergedList;
        mergedList = mergedList->next;
        delete temp;
    }

    return 0;
}

