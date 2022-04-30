#include <string>
#include <queue>

using namespace std;
class Solution {
public:
    string reorganizeString(string s) {
        int n = s.size();
        string ans = "";
        int h[26] = { 0 };

        for (int i = 0;i < n;i++) {
            h[s[i] - 'a']++;
        }

        priority_queue<pair<int, char>>pq;

        for (int i = 0;i < 26;i++) {
            if (h[i] > (n / 2 + n % 2)) {
                return "";
            }

            if (h[i] > 0) {
                pq.push({ h[i],i + 'a' });
            }
        }

        char c1;
        int count1;
        char c2;
        int count2;
        while (!pq.empty()) {

            c1 = pq.top().second;
            count1 = pq.top().first;
            ans += c1;
            count1--;
            pq.pop();

            if (!pq.empty()) {
                c2 = pq.top().second;
                count2 = pq.top().first;
                pq.pop();

                ans += c2;
                count2--;

                if (count2 > 0) {
                    pq.push({ count2,c2 });
                }
            }

            if (count1 > 0) {
                pq.push({ count1,c1 });
            }

        }
        return ans;
    }
};