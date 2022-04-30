#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class myComparator
{
public:
    int operator() (const pair<double, pair<int, int>>& p1, const pair<double, pair<int, int>>& p2)
    {
        return p1.first > p2.first;
    }
};
pair<int, int> kthSmallestFraction(vector<int> nums, int k) {
    priority_queue < pair<double, pair<int, int>>, vector<pair<double, pair<int, int>>>, myComparator >pq;

    for (int i = 0; i < nums.size() - 1; i++) {
        for (int j = i + 1; j < nums.size(); j++) {
            pq.push({ nums[i] / nums[j],{nums[i],nums[j]} });
        }
    }
    for (int i = 0; i < k; i++) {
        pair<int, int> out = pq.top().second;
        // cout << out.first << "/" << out.second << endl;
        pq.pop();
    }
    pair<double, pair<int, int>> p = pq.top();
    return p.second;
}

int main() {
    pair<int, int> out = kthSmallestFraction({ 1,2,3,5 }, 3);
    cout << out.first << "/" << out.second << endl;
    out = kthSmallestFraction({ 1,7 }, 1);
    cout << out.first << "/" << out.second << endl;
    return 0;
}