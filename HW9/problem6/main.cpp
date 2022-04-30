#include <iostream>
#include "solution.cpp"
using namespace std;

int main() {
    Solution s;
    cout << s.canCross({ 0,1,3,5,6,8,12,17 }) << endl;
    cout << s.canCross({ 0,1,2,3,4,8,9,11 }) << endl;
    return 0;
}