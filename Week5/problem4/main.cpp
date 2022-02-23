#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    Solution s;
    cout << "Example 1: " << s.rotateString("abcde", "cdeab") << endl;
    cout << "Example 2: " << s.rotateString("abcde", "abced") << endl;
    return 0;
}