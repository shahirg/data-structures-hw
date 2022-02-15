#include "solution.h"
using std::vector;
using std::string;
using namespace std;

int Solution::calPoints(vector<string>& ops) {
    int total = 0;
    int temp;
    vector<string> history;
    for (int i = 0; i < ops.size(); i++) {
        if (ops.at(i).compare("C") == 0) {
            total -= stoi(history.back());
            history.pop_back();
        }
        else if (ops.at(i).compare("D") == 0) {
            temp = stoi(history.back()) * 2;
            total += temp;
            history.push_back(to_string(temp));
        }
        else if (ops.at(i).compare("+") == 0) {
            temp = stoi(history.back()) + stoi(history.at(history.size() - 2));
            total += temp;
            history.push_back(to_string(temp));
        }
        else {
            total += stoi(ops.at(i));
            history.push_back(ops.at(i));
        }
    }
    return total;
}


