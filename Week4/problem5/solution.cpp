#include "solution.h"
using std::vector;
int Solution::countRangeSum(vector<int>& nums, int lower, int upper) {
    vector<int> sums{ 0 };

    for (int i = 0; i < nums.size(); i++) {
        sums.push_back(sums.at(i) + nums.at(i));
    }
    int sum, count = 0;
    for (int i = 0; i < sums.size(); i++) {
        for (int j = i + 1; j < sums.size(); j++) {
            sum = sums.at(j) - sums.at(i);
            if (sum <= upper && sum >= lower)
                count++;
        }
    }
    return count;
}