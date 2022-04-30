#include "solution.hpp"
using namespace std;
vector<TreeNode*> Solution::generate(int n) {
    if (n == 0) {
        vector<TreeNode*> res;
        res.push_back(NULL);
        return res;
    }

    if (n == 1) {
        vector<TreeNode*> res;
        res.push_back(new TreeNode(0));
        return res;
    }

    vector<TreeNode*> vec;
    for (int i = 1;i < n;i += 2) {
        vector<TreeNode*> from_left = generate(i);
        vector<TreeNode*> from_right = generate(n - i - 1);

        for (TreeNode* l : from_left) {
            for (TreeNode* r : from_right) {
                TreeNode* root = new TreeNode(0);
                root->left = l;
                root->right = r;
                vec.push_back(root);
            }
        }
    }

    return vec;
}

vector<TreeNode*> Solution::allPossibleFBT(int n) {
    vector<TreeNode*> res;
    if (n % 2 == 0) {
        return res;
    }

    return Solution::generate(n);
}
