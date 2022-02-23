#include "ListNode.h"

ListNode::~ListNode() {
    delete ListNode::next;

}
ListNode::ListNode() {
    ListNode::val = 0;
    ListNode::next = nullptr;
}
ListNode::ListNode(int x) {
    ListNode::val = x;
    ListNode::next = nullptr;
}
ListNode::ListNode(int x, ListNode* next) {
    ListNode::val = x;
    ListNode::next = next;
}
