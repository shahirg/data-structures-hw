#include "Node.hpp"

Node::Node() {
    this->val = 0;
    this->next = nullptr;
}

Node::Node(int val) {
    this->val = val;
    this->next = nullptr;
}

Node::Node(int val, Node next) {
    this->val = val;
    this->next = next;
}