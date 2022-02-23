#include <iostream>
#include <vector>
#include "solution1.h"
using namespace std;

int main() {

    TreeNode* tree = new TreeNode(4);
    tree->left = new TreeNode(2);
    tree->right = new TreeNode(6);
    tree->left->left = new TreeNode(1);
    tree->left->right = new TreeNode(3);
    tree->right->left = new TreeNode(5);
    tree->right->right = new TreeNode(7);

    cout << tree->val << "\n";
    Solution s;
    vector<int> out = s.inorderTraversal(tree);
    for (int i = 0; i < out.size(); i++) {
        cout << out.at(i) << endl;
    }

    delete tree;

    return 0;
}