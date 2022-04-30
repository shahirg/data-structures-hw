#include "solution.hpp"
using namespace std;
int Solution::getScore(vector<int> nums) {
    vector<vector<int>> map;
    for (int i = 0; i < nums.size(); i++) {
        map.push_back({});
        for (int j = i + 1; i < nums.size(); i++) {
            if (i == j)
                continue;
            map.at(i).push_back(gcd(nums.at(i), nums.at(j)));

        }
    }
}
int Solution::gcd(int x, int y) {
    if (x == 0)
        return y;
    return gcd(y % x, x);
}