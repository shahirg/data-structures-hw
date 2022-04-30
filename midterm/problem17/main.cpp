#include <queue>
#include <iostream>
using namespace std;

struct btnode
{
    int  datavalue;
    btnode* left;
    btnode* right;
};
int findValueRec(btnode* root, int val) {
    if (root == nullptr)
        return 0;
    return (root->datavalue == val ? 1 : 0) + findValueRec(root->left, val) + findValueRec(root->right, val);

}
int findValueQueue(btnode* root, int val) {
    if (root == nullptr)
        return 0;
    queue<btnode*> q;
    btnode* ptr;
    int count = 0;
    q.push(root);
    while (!q.empty()) {
        ptr = q.front();
        if (ptr->datavalue == val)
            count++;
        if (ptr->left != nullptr)
            q.push(ptr->left);
        if (ptr->right != nullptr)
            q.push(ptr->right);
        q.pop();
    }
    return count;
}
int main() {
    btnode* ptr = new btnode();
    ptr->datavalue = 5;
    ptr->left = new btnode();
    ptr->left->datavalue = 3;
    ptr->right = new btnode();
    ptr->right->datavalue = 7;
    ptr->left->left = new btnode();
    ptr->left->left->datavalue = 5;
    ptr->right->right = new btnode();
    ptr->right->right->datavalue = 15;
    cout << findValueQueue(ptr, 5) << endl << findValueRec(ptr, 5) << endl;
}