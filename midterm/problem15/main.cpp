#include <iostream>
using namespace std;

struct Node {
    int val;
    Node* next;
};

void addOnes(Node* head) {
    if (head == nullptr)
        return;
    if (head->val == 0) {
        Node* ptr = new Node();
        ptr->val = 1;
        ptr->next = head->next;
        head->next = ptr;
    }
    addOnes(head->next);
}

void printLL(Node* ptr) {
    while (ptr != nullptr) {
        cout << ptr->val << ((ptr->next != nullptr) ? "->" : "");
        ptr = ptr->next;
    }
    cout << endl;
}
int main() {
    Node* ptr = new Node();
    ptr->val = 1;
    ptr->next = new Node();
    ptr->next->val = 0;
    ptr->next->next = new Node();
    ptr->next->next->val = 3;
    printLL(ptr);
    addOnes(ptr);
    printLL(ptr);

}