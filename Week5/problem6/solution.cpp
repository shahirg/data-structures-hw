#include "solution.h"
using std::string;

string Solution::longestPrefix(string s) {
    string out = "";
    for (int i = 0; i < s.length() - 1; i++) {
        string prefix = s.substr(0, i + 1);
        string suffix = s.substr(s.length() - i - 1);
        if (prefix.compare(suffix) == 0)
            out = prefix;
    }
    return out;
}
