#include "solution.h"
using std::string;

int Solution::strStr(string haystack, string needle) {
    int* table = calcPreficLen(needle);
    int i = 0, j = 0, np = 0;
    while (i < haystack.length()) {
        if (haystack[i] == needle[j]) {
            i++;
            j++;
            if (j == needle.length()) {
                return i - j;
            }
        }
        else {
            j = table[j];
            if (j < 0) {
                i++;
                j++;
            }
        }
    }
    return -1;
}
int* Solution::calcPreficLen(string pattern) {
    int* shift = new int[pattern.length()];
    int pos = 1, cnd = 0;
    shift[0] = -1;
    while (pos < pattern.length()) {
        if (pattern[pos] == pattern[cnd]) {
            shift[pos] = shift[cnd];
        }
        else {
            pattern[pos] = cnd;
            while (cnd >= 0 && pattern[pos] != pattern[cnd]) {
                cnd = shift[cnd];
            }
            pos++;
            cnd++;
        }
    }
    shift[pos] = cnd;
}