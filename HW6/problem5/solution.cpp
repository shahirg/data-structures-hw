#include "solution.hpp"
using namespace std;
bool Solution::isGood(vector<int> nums) {
    if (nums.empty())
        return false;
    if (nums.size() == 0)
        return nums.at(0) == 1;
    int temp = nums.at(0);
    for (int i = 1; i < nums.size(); i++) {
        temp = gcd(temp, nums.at(i));
        if (temp == 1)
            return true;
    }
    return false;
}

int Solution::gcd(int x, int y) {
    if (x == 0)
        return y;
    return gcd(y % x, x);
}