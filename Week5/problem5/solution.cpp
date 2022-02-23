#include "solution.h"

bool Solution::isSubtree(TreeNode* root, TreeNode* subRoot) {
    if (root == nullptr && subRoot == nullptr) {
        return true;
    }
    if (root == nullptr && subRoot != nullptr || root != nullptr && subRoot == nullptr) {
        return false;
    }

    if (root->val == subRoot->val) {
        return isSubtree(root->left, subRoot->left) && isSubtree(root->right, subRoot->right);
    }
    return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
}