#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <queue>
using namespace std;

vector<string> kMostFrequentStrings(vector<string> words, int k) {
    unordered_map<string, int> map;
    typedef pair<string, int> pi;
    vector<pi> kmost;
    // O(n)
    for (string word : words) {
        if (map.find(word) == map.end())
            map[word] = 1;
        else
            map[word]++;
    }
    priority_queue<pi, vector<pi>, greater<pi>> pq;
    return {};
}

int main() {
    vector<string> out = kMostFrequentStrings({}, 1);
    for (string x : out) {
        cout << x << ' - ';
    }
    return 0;
}