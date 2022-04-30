#include <iostream>
#include "solution.cpp"
using namespace std;

int main() {
    Solution s;
    cout << s.isScramble("great", "rgeat") << endl;
    cout << s.isScramble("abcde", "caebd") << endl;
    return 0;
}