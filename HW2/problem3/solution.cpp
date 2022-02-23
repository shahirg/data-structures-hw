#include "solution.h"
#include <vector>
#include <iostream>
using namespace std;
using std::vector;
using std::string;

vector<int> Solution::preorderTraversal(TreeNode* root) {
    vector<int> out;
    return preorderTraversalRec(root, &out);
}
vector<int> Solution::preorderTraversalRec(TreeNode* root, vector<int>* l) {
    if (root == nullptr)
        return *l;
    (*l).push_back(root->val);
    preorderTraversalRec(root->left, l);
    preorderTraversalRec(root->right, l);
    return *l;
}
TreeNode* Solution::recoverFromPreorder(string traversal) {

    TreeNode* out = nullptr;
    out = recoverFromPreorderRec(traversal, 1);
    return out;
}
// 1-2--3--4-5--6--7
//  1
TreeNode* Solution::recoverFromPreorderRec(string traversal, int depth) {

    TreeNode* out = nullptr;
    out = new TreeNode(((int)(traversal.at(0)) - 48));
    if (traversal.length() <= 1) {
        return out;
    }
    string delim = "";
    for (int i = 0; i < depth; i++)
        delim += "-";
    // find left and right subtree split
    string s = traversal.substr(1 + depth, s.size() - 1 - 2);
    int ind = -1;
    for (int i = 1; i < s.length() - depth; i++) {
        if ((s.substr(i, depth)).compare(delim) == 0
            && s.at(i - 1) != '-' && (s.at(i + depth)) != '-') {
            ind = i;
            break;
        }
    }

    if (ind == -1) {
        out->left = recoverFromPreorderRec(s, depth + 1);
    }
    else {
        out->left = recoverFromPreorderRec(s.substr(0, ind), depth + 1);
        out->right = recoverFromPreorderRec(s.substr(ind + depth, s.length() - ind - depth), depth + 1);
    }
    return out;

}
