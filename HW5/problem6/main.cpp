#include <iostream>
#include "solution.hpp"
using namespace std;
using std::vector;
using std::string;
int main() {
    Solution s;
    vector<string> words{ "cat", "catdog", "dog" };
    vector<string> out = s.findAllConcatenatedWordsInADict(words);
    for (string str : out) {
        cout << str << endl;
    }
    return 0;
}