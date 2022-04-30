#include <iostream>
#include "solution.cpp"
using namespace std;

void printVector(vector<string> list) {
    cout << "[";
    for (string x : list) {
        cout << x << ", ";
    }
    cout << "]" << endl;
}

int main() {
    Solution s;
    //vector<string> out = s.wellFormedParens(3);

    printVector(s.wellFormedParens(3));
    return 0;
}