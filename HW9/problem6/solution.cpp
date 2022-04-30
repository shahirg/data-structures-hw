#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    bool canCross(vector<int> stones) {
        if (stones[1] != 1)
            return false;
        return canCross(0, 1, stones);
    }
    bool canCross(int i, int k, vector<int>& stones) {
        if (i == stones[stones.size() - 1])
            return true;
        if (i > stones[stones.size() - 1])
            return false;
        if (binary_search(stones.begin(), stones.end(), i) == false)
            return false;
        if (canCross(i + k + 1, k + 1, stones))
            return true;
        if (canCross(i + k, k, stones))
            return true;
        if (k > 1 && canCross(i + k - 1, k - 1, stones))
            return true;
        return false;
    }
};