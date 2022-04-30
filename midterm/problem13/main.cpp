struct NODE {
    int val;
    NODE* next, * prev;
};

void freeList(NODE* head) {
    if (head == nullptr)
        return;
    // go to end of list
    freeList(head->next);
    // delete from end of list
    delete head;
}

void main() {
    NODE* head; 	// ptr points to the first node (e.g. head) of the linked list
    // head = createSomeLinkedList();
    freeList(head);
}
