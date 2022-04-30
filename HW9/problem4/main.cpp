#include <iostream>
#include "solution.cpp"
using namespace std;

int main() {
    Solution s;
    vector<vector<int>> matrix{ {9,9,4},{6,6,8},{2,1,1} };
    cout << s.longestIncPath(matrix) << endl;
    return 0;
}