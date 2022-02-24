class Node {
public:
    int val;
    Node();
    Node(int val);
    Node(int val, Node next);
private:
    Node* next;
};