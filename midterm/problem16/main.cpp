#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool balananced(string input) {
    char temp = ' ';
    stack<char> stk;
    for (int i = 0; i < input.length(); i++) {
        if (input.at(i) == '(' || input.at(i) == '[' || input.at(i) == '{') {
            stk.push(input.at(i));
        }
        if (input.at(i) == ')') {
            temp = stk.top();
            stk.pop();
            if (temp == '[' || temp == '{')
                return false;
        }
        if (input.at(i) == ']') {
            temp = stk.top();
            stk.pop();
            if (temp == '(' || temp == '{')
                return false;
        }
        if (input.at(i) == '}') {
            temp = stk.top();
            stk.pop();
            if (temp == '[' || temp == ')')
                return false;
        }
    }
    return stk.empty();
}
int main() {
    cout << balananced("bletch") << endl;
    cout << balananced("{}") << endl;
    cout << balananced("[( )( )]") << endl;
    cout << balananced("{goober[{face}]}") << endl;
    cout << balananced("(a(b((c)))d)[(ef{g})]") << endl;
    cout << balananced("Snitch[") << endl;
    cout << balananced("[fe[fi[fo}fum]ack)") << endl;
    cout << balananced("((start()())") << endl;
}
