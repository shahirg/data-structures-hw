#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    Solution s;
    cout << "Example 1:" << s.removeOuterParentheses("(()())(())") << endl;
    cout << "Example 2:" << s.removeOuterParentheses("(()())(())(()(()))") << endl;
    cout << "Example 3:" << s.removeOuterParentheses("()()") << endl;
    return 0;
}