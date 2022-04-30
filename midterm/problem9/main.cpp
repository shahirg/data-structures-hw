#include <iostream>
using namespace std;

struct NODE {
    int val;
    NODE* next;
};

NODE* swapFirstTwo(NODE* head) {
    if (head == nullptr || head->next == nullptr)
        return head;
    NODE* ptr = head;
    head = head->next;
    ptr->next = head->next;
    head->next = ptr;
    return head;
}

void printLL(NODE* ptr) {
    while (ptr != nullptr) {
        cout << ptr->val << ((ptr->next != nullptr) ? "->" : "");
        ptr = ptr->next;
    }
    cout << endl;
}
int main() {
    NODE* ptr = new NODE();
    ptr->val = 1;
    ptr->next = new NODE();
    ptr->next->val = 2;
    ptr->next->next = new NODE();
    ptr->next->next->val = 3;
    printLL(ptr);
    ptr = swapFirstTwo(ptr);
    printLL(ptr);

}