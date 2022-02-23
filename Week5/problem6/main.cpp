#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    Solution s;
    cout << s.longestPrefix("ababab") << endl;
    cout << s.longestPrefix("level") << endl;
    return 0;
}