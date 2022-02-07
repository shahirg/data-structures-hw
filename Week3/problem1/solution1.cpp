#include <vector>
#include "solution1.h"
using std::vector;


vector<int> Solution::inorderTraversal(TreeNode* root) {
  vector<int> out;
  return inorderTraversalRec(root, &out);
}
vector<int> Solution::inorderTraversalRec(TreeNode* root, vector<int>* l) {
  if (root == nullptr)
    return *l;
  inorderTraversalRec(root->left, l);
  (*l).push_back(root->val);
  inorderTraversalRec(root->right, l);
  return *l;
}
