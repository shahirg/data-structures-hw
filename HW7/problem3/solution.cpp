
#include "solution.hpp"
#include <stack>
#include <vector>
#include <algorithm>
using namespace std;

string Solution::evaluate(string input) {
    int count = 0, i = 0;
    vector<string> list;
    string res = "";
    for (int j = 0; j < input.size(); ++j) {
        count += (input[j] == '1') ? 1 : -1;
        if (count == 0) {
            list.push_back('1' + evaluate(input.substr(i + 1, j - i - 1)) + '0');
            i = j + 1;
        }
    }
    sort(list.begin(), list.end(), greater<string>());
    for (i = 0; i < list.size(); ++i)
        res += list[i];
    return res;
}
