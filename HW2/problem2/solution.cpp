#include "solution.h"

bool Solution::isValidBST(TreeNode* root) {
    if (root == nullptr)
        return true;
    if ((root->left != nullptr && root->left->val > root->val) ||
        (root->right != nullptr && root->right->val < root->val))
        return false;

    return isValidBST(root->left) && isValidBST(root->right);
}