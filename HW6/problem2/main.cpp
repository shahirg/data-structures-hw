#include <iostream>
#include "solution.hpp"
using namespace std;

int main() {
    Solution s;
    cout << s.gcd({ 2,5,6,9,10 }) << endl;
    cout << s.gcd({ 7,5,6,8,3 }) << endl;
    cout << s.gcd({ 3,3 }) << endl;
    return 0;
}