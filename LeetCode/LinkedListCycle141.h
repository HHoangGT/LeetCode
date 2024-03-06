//
// Created by hoang on 3/7/2024.
//

#ifndef LEETCODE_LINKEDLISTCYCLE141_H
#define LEETCODE_LINKEDLISTCYCLE141_H

#include "../libs/template.h"

struct ListNode {
    int val;
    ListNode *next;

    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                return true;
            }
        }
        return false;
    }
};


#endif //LEETCODE_LINKEDLISTCYCLE141_H
