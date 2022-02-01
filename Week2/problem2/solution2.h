#include <iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // get sum of two list nodes
        int sum = expandListNode(l1) + expandListNode(l2);
        return intToListNode(sum); // convert sum to ListNode
    }
    int expandListNode(ListNode* l) {
        ListNode* ptr = l;

        int count = 1, value = 0;
        while (ptr != nullptr) {
            value += count * (ptr->val); // add val
            count *= 10; // increment postion
            ptr = ptr->next; // iterate ptr
        }

        return value;
    }
    ListNode* intToListNode(int num) {
        ListNode* front = nullptr;
        ListNode* ptr = nullptr;

        int digit = 0;
        while (num != 0) {
            digit = num % 10; // get last digit
            num = num / 10; // delete last digit
            // append digit to list
            if (front == nullptr) {
                front = new ListNode(digit);
                ptr = front;
            }
            else {
                ptr->next = new ListNode(digit);
                ptr = ptr->next;
            }

        }
        // cout << front->next->val;
        return front;

    }
};
