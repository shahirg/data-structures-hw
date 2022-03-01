#include <iostream>
#include "solution.hpp"
using namespace std;

int main() {
    TreeNode* root = new TreeNode(1, new TreeNode(2), new TreeNode(3));
    TreeNode* root2 = new TreeNode(1, new TreeNode(2), nullptr);
    TreeNode* root3 = new TreeNode(1, nullptr, new TreeNode(2));
    TreeNode* root4 = new TreeNode(1, new TreeNode(2), new TreeNode(1));
    TreeNode* root5 = new TreeNode(1, new TreeNode(1), new TreeNode(2));
    Solution s;
    cout << "Example 1: " << s.isSameTree(root, root) << endl;
    cout << "Example 2: " << s.isSameTree(root2, root3) << endl;
    cout << "Example 3: " << s.isSameTree(root4, root5) << endl;
    return 0;
}