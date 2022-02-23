#include "solution.h"
using std::string;

bool Solution::rotateString(string s, string goal) {

    for (int i = 0; i < s.length(); i++) {
        if (s.compare(goal) == 0)
            return true;
        s = s.substr(1) + s[0];
    }
    return false;
}