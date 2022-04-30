#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int evaluate(vector<int> input) {
        sort(input.begin(), input.end());
        int max = 0, temp;
        for (int i = 0; i < input.size() - 1; i++) {
            temp = input.at(i + 1) - input.at(i);
            if (temp > max) {
                max = temp;
            }

        }
        return max;
    }
};