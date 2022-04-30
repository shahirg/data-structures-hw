#include <iostream>
#include "solution.hpp"
using namespace std;

int main() {
    Solution s;
    cout << s.isGood({ 12,5,7,23 }) << endl;
    cout << s.isGood({ 29,6,10 }) << endl;
    cout << s.isGood({ 3,6 }) << endl;
    return 0;
}