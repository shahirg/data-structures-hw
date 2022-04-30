#include <string>
#include <queue>
#include <algorithm>
using namespace std;
class Solution {
public:
    double mincostToHireWorkers(vector<int> quality, vector<int> wage, int k) {
        int n = wage.size();
        vector<pair<double, double>> ratio;
        for (int i = 0;i < n;i++) {
            double currRatio = (double)wage[i] / (double)quality[i];
            ratio.push_back({ currRatio, (double)quality[i] });
        }

        sort(ratio.begin(), ratio.end());

        priority_queue<double> pq;
        double sumQ = 0;
        double ret = 1e9;
        for (int i = 0;i < n;i++) {
            pq.push(ratio[i].second);
            sumQ += ratio[i].second;

            if (pq.size() > k) {
                sumQ -= pq.top();
                pq.pop();
            }
            if (pq.size() == k) {
                ret = min(ret, sumQ * ratio[i].first);
            }
        }
        return ret;
    }
};