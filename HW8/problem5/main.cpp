#include <iostream>
#include "solution.cpp"
using namespace std;

int main() {
    Solution s;
    cout << s.mincostToHireWorkers({ 10,20,5 }, { 70,50,30 }, 2) << endl;
    return 0;
}