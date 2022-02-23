#include <iostream>
#include "solution2.h"

using namespace std;

void printListNode(ListNode* l) {
    while (l != nullptr) {
        cout << l->val << (l->next == nullptr ? "" : " -> ");
        l = l->next;
    }
}

int main() {
    Solution s;
    ListNode* l1 = new ListNode(2, new ListNode(4, new ListNode(3)));
    ListNode* l2 = new ListNode(5, new ListNode(6, new ListNode(4)));
    ListNode* out = s.addTwoNumbers(l1, l2);

    cout << s.expandListNode(out) << "\n";
    printListNode(out);
    return 0;
}