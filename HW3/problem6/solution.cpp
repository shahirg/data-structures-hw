#include "solution.h"

ListNode* Solution::sortList(ListNode* head) {
    if (head == nullptr) {
        return nullptr;
    }
    ListNode* front = nullptr;
    ListNode* back = nullptr;
    split(head, &front, &back);
    sortList(front);
    sortList(back);
    head = merge(front, back);
    return head;
}
ListNode* Solution::merge(ListNode* l1, ListNode* l2) {
    ListNode* out = nullptr;
    ListNode* outptr = nullptr;
    if (l1 == nullptr) {
        return l2;
    }
    if (l2 == nullptr) {
        return l1;
    }
    while (l1 != nullptr && l2 != nullptr) {
        if (l1->val < l2->val) {
            if (out == nullptr) {
                out = l1;
                outptr = l1;
            }
            else {
                outptr->next = l1;
                outptr = outptr->next;
            }
            l1 = l1->next;
        }
        else {
            if (out == nullptr) {
                out = l2;
                outptr = l2;
            }
            else {
                outptr->next = l2;
                outptr = outptr->next;
            }
            l2 = l2->next;
        }
    }
    if (l1 != nullptr)
        outptr->next = l1;
    else if (l2 != nullptr)
        outptr->next = l2;
    else {
        outptr->next = nullptr;
    }
    return out;

}
void Solution::split(ListNode* head, ListNode** front, ListNode** back) {
    ListNode* ptr1 = head;
    ListNode* ptr2 = head;
    while (ptr2 != nullptr && ptr2->next != nullptr) {
        ptr2 = ptr2->next->next;
        ptr1 = ptr1->next;
    }
    *front = head;
    *back = ptr1->next;
    ptr1->next = nullptr;

}