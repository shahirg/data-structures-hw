#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    Solution s;
    s.decodeString("a");
    cout << s.decodeString("3[a]") << endl;
    return 0;
}