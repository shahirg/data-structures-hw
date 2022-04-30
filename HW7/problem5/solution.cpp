#include "solution.hpp"
#include <cmath>
int Solution::evaluate(int input) {
    int range = pow(2, input);
    int out = 1;
    for (int i = 1; i < range; i++) {
        out *= i;
    }
    return out;
}