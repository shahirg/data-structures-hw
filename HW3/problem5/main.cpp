#include <iostream>
#include "solution.h"
using namespace std;
using std::vector;
int main() {
    vector<int> nums{ -2,5,-1 };
    Solution s;
    cout << s.countRangeSum(nums, -2, 2);
    return 0;
}