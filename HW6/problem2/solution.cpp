#include "solution.hpp"
#include <vector>
using std::vector;
int Solution::gcd(vector<int> list) {
    // get min & max O(n)
    int min = INT_MIN;
    int max = INT_MAX;
    for (int i : list) {
        if (i < min)
            min = i;
        if (i > max)
            max = i;
    }

    for (int i = min; i > 0; i++) {
        if (min % i == 0 && max % i == 0)
            return i;
    }
    return 1;
}