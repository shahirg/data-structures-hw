#include <vector>
#include <string> 
#include <iostream>
using namespace std;
class Solution {
public:
    vector<string> wellFormedParens(int n) {
        vector<string> list;
        wellFormedParensHelper(n - 1, 1, "(", &list);
        return list;

    }
    void wellFormedParensHelper(int n, int m, string x, vector<string>* list) {
        cout << "n = " << n << " m =" << m << " x=" << x << endl;
        if (m < 0)
            return;
        if (n == 0) {
            for (int i = 0; i < m;i++)
                x.append(")");
            (*list).push_back(x);
            return;
        }
        string temp = x;
        wellFormedParensHelper(n - 1, m + 1, x.append("("), list);
        if (m != 0)
            wellFormedParensHelper(n, m - 1, temp.append(")"), list);
    }
};