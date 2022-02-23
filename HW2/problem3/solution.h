#include <string>
#include<vector>
using std::string;
using std::vector;
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    TreeNode* recoverFromPreorder(string traversal);
    TreeNode* recoverFromPreorderRec(string traversal, int depth);
    vector<int> preorderTraversal(TreeNode* root);
    vector<int> preorderTraversalRec(TreeNode* root, vector<int>* l);
};
