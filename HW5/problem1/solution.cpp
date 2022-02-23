#include "solution.h"
#include <vector>
using std::vector;
using std::string;

string Solution::removeOuterParentheses(string s) {
    vector<char> stk;
    string output = "";
    for (char c : s) {
        if (c == '(') {
            if (!stk.empty()) {
                output += '(';
            }
            stk.push_back('(');
        }
        else {
            stk.pop_back();
            if (!stk.empty()) {
                output += ')';
            }
        }
    }
    return output;
}