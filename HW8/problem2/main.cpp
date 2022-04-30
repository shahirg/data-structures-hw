#include <iostream>
#include "solution.cpp"
using namespace std;

int main() {
    Solution s;
    vector<int> in{ 3,6,9,1 };
    cout << s.evaluate(in) << endl;
    return 0;
}