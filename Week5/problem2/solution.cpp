#include "solution.h"
using std::string;
#include <iostream>
int Solution::repeatedStringMatch(string a, string b) {
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    int count = 1;
    while (a.find(b) == -1) {
        if (a.length() > b.length() * 2)
            return -1;
        a += a;
        count++;
    }
    return count;
}
