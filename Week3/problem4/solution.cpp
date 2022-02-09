#include "solution.h"
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
using std::vector;
using std::string;

string Solution::smallestFromLeaf(TreeNode* root) {
    if (root == nullptr)
        return "";
    char out = (char)(root->val + 97);
    // get left and right subtreees
    string left = smallestFromLeaf(root->left);
    string right = smallestFromLeaf(root->right);
    // cover for one being empty
    if (left.length() == 0)
        return right + out;
    if (right.length() == 0)
        return left + out;
    int len = min(left.size(), right.size());

    // find which one way to go
    for (int i = 0; i < len; i++) {
        if (left.at(i) < right.at(i))
            return left + out;
        else if (left.at(i) > right.at(i))
            return right + out;
    }
    // if they are substring return shorter one
    return left.size() == len ? left + out : right + out;
}
