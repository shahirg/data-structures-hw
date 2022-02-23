#include "solution.h"
#include "stack.h"
#include <string>
#include <vector>
#include <iostream>
using std::string;
using std::vector;
int Solution::calculate(string s) {
    int op = 1, total = 0;
    vector<int> stk;
    for (char c : s) {
        if (c >= '0' && c <= '9') {
            total += (((int)c - '0') * op);
            op = 1;
        }
        else if (c == '+') {
            op = 1;
        }
        else if (c == '-') {
            op = -1;
        }
        else if (c == '(') {
            stk.push_back(total);
            stk.push_back(op);
            total = 0;
            op = 1;
        }
        else if (c == ')') {
            total = total * stk.back();
            stk.pop_back();
            total += stk.back();
            stk.pop_back();

        }
    }
    return total;
}