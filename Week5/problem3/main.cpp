#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    Solution s;
    cout << s.shortestPalindrome("abcd") << endl;
    cout << s.shortestPalindrome("aacecaaa") << endl;
    return 0;
}