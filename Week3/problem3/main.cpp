#include <iostream>
#include "solution.h"
#include <string>
#include <vector>
using namespace std;
using std::string;
using std::vector;

int main() {
    string x = "1-2--3--4-5--6--7";
    Solution s;


    TreeNode* out = s.recoverFromPreorder(x);
    vector<int> l = s.preorderTraversal(out);
    cout << "\n";
    for (int i = 0; i < l.size(); i++) {
        cout << l.at(i) << "\n";
    }

    return 0;
}