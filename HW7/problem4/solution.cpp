#include <queue>
using namespace std;
class Solution {
public:
    int findTheWinner(int n, int k) {

        queue<int> list;
        for (int i = 1;i <= n;i++) {
            list.push(i);
        }
        while (list.size() != 1) {
            for (int j = 1;j < k;j++) {
                int temp = list.front();
                list.push(temp);
                list.pop();
            }
            list.pop();
        }
        return list.front();
    }
};