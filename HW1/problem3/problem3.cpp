#include <iostream>
#include "solution3.h"
#include <vector>

using std::vector;
using namespace std;

void printListNode(ListNode* l) {
    while (l != nullptr) {
        cout << l->val << (l->next == nullptr ? "" : " -> ");
        l = l->next;
    }
}

int main() {
    Solution s;
    ListNode* l1 = new ListNode(2, new ListNode(4, new ListNode(8)));
    ListNode* l2 = new ListNode(5, new ListNode(8, new ListNode(9)));
    ListNode* l3 = new ListNode(5, new ListNode(6, new ListNode(13)));
    vector<ListNode*> lists;
    lists.push_back(l1);
    lists.push_back(l2);
    lists.push_back(l3);
    ListNode* out = s.mergeKLists(lists);
    printListNode(out);
    return 0;
}