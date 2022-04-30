#include "solution.hpp"
#include <stack>
using namespace std;

bool Solution::evaluate(string input) {
    char op;
    bool state;

    stack<char> stk;
    stack<string> strstk;

    string temp = "";
    for (char c : input) {
        if (c == '!' || c == '&' || c == '|') {
            stk.push(c);
            if (temp.length() != 0)
                strstk.push(temp);
        }
        else if (c == 't', c == 'f') {
            temp += 't'
        }
        else if (c == '(') {
            continue;
        }
        else if (c == ')') {
            op = stk.top();
            stk.pop();
            if (op == '&') {

            }
        }
    }
}
