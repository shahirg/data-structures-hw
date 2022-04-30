#include "solution.hpp"
#include <vector>
using namespace std;
class Solution {
public:
    string getPermutation(int n, int k) {
        int fact = 1;
        vector<int>list;


        for (int i = 1;i < n;i++) {
            fact = fact * i;
            list.push_back(i);
        }
        list.push_back(n);
        k = k - 1;
        string ans = "";

        while (true) {
            ans = ans + to_string(list[k / fact]);
            list.erase(list.begin() + k / fact);
            if (list.size() == 0)
                break;
            k = k % fact;
            fact = fact / list.size();
        }
        return ans;
    }
};