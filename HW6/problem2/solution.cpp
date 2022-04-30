#include "solution.hpp"
#include <vector>
#include <climits>
using std::vector;
int Solution::gcd(vector<int> list) {
    // get min & max O(n)
    int min = INT_MAX;
    int max = INT_MIN;
    for (int i : list) {
        if (i < min)
            min = i;
        if (i > max)
            max = i;
    }

    return gcd(max, min);
}
int Solution::gcd(int x, int y) {
    if (x == 0)
        return y;
    return gcd(y % x, x);
}