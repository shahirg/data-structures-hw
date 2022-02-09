#include <iostream>
#include "solution.h"
#include <string>
using namespace std;

int main() {
    TreeNode* out = new TreeNode(0);
    out->left = new TreeNode(1);
    out->right = new TreeNode(2);
    out->left->left = new TreeNode(3);
    out->left->right = new TreeNode(4);
    out->right->left = new TreeNode(3);
    out->right->right = new TreeNode(4);
    Solution s;
    string x = s.smallestFromLeaf(out);
    cout << x << endl;
    return 0;
}