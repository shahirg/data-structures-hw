#include "solution.h"
#include <iostream>
#include <vector>
using std::vector;
using std::string;
string Solution::decodeString(string s) {
    std::cout << !(s.find('[') != string::npos) << std::endl;
    if (!(s.find('[') != string::npos)) {
        return s;
    }
    string output = "";
    int count;
    string inner = "";
    vector<char> brackets;
    for (char c : s) {
        // std::cout << c << std::endl;
        if (brackets.empty() && c <= 57 && c >= 48) {
            count = (int)c - '0';
            // std::cout << "test" << count << std::endl;
        }
        else if (c == '[') {
            brackets.push_back(c);
        }
        else if (c == ']') {
            brackets.pop_back();
            if (brackets.empty()) {
                inner = decodeString(inner.substr(2, inner.size() - 2));
                for (int i = 0; i < count; i++) {
                    output += inner;
                }
                inner = "";
                continue;
            }
        }
        inner += c;
    }
    return output;
}



