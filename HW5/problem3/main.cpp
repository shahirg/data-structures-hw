#include <iostream>
#include "FreqStack.hpp"
#include <string>
#include <vector>
using namespace std;

int main() {
    FreqStack* obj;
    vector<string> input{ "FreqStack", "push", "push", "push", "push", "push", "push", "pop", "pop", "pop","pop" };
    vector<int> vals{ 0,5,7,5,7,4,5,0,0,0,0 };
    vector<string> output;
    for (int i = 0; i < input.size(); i++) {
        if (input[i].compare("FreqStack") == 0) {
            obj = new FreqStack();
            output.push_back("null");
        }
        else if (input[i].compare("push") == 0) {
            obj->push(vals[i]);
            output.push_back("null");
        }
        else if (input.at(i).compare("pop") == 0) {
            int temp = obj->pop();
            cout << temp << endl;
            output.push_back(to_string(temp));
        }
    }
    cout << "[";
    for (int i = 0; i < output.size(); i++) {
        cout << output.at(i) << ", ";
    }
    cout << "]" << endl;
    return 0;
}