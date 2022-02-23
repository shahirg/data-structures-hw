#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    vector<string> input{ "5","2" ,"C", "D", "+" };
    Solution s;
    cout << s.calPoints(input) << endl;
    input = { "5","-2","4","C","D","9","+","+" };
    cout << s.calPoints(input) << endl;
    return 0;
}