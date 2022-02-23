#include "solution.h"
using std::string;

string Solution::shortestPalindrome(string s) {
    string rev = "";
    for (int i = s.length() - 1; i > 0; i--) {
        rev += s[i];
    }
    int ind = -1;
    for (int i = 0; i < s.length(); i++) {
        if (checkPalindrome(s.substr(0, s.length() - i - 1))) {
            ind = i;
            break;
        }
    }
    return ind == -1 ? rev.substr(0, rev.length() - 1 - ind - 1) + s : rev.substr(0, ind + 1) + s;

}
bool Solution::checkPalindrome(string s) {
    for (int i = 0; i < s.length() / 2; i++) {
        if (s[i] != s[s.length() - i - 1])
            return false;
    }
    return true;
}