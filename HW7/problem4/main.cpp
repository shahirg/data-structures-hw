#include <iostream>
#include "solution.cpp"
using namespace std;

int main() {
    Solution s;
    cout << s.findTheWinner(5, 2) << endl;
    cout << s.findTheWinner(6, 5) << endl;
    return 0;
}