#include <vector>
#include <iostream>
#include <unordered_map>
#include <queue>
using namespace std;

struct Edge {
    int parent, child, distance;
    Edge(int parent, int child, int distance) :parent(parent), child(child), distance(distance) {}
};
struct Node {
    int val;
    vector<Edge*> edges;
    Node() : val(0), edges({}) {}
    Node(int x) : val(x), edges({}) {}
    Node(int x, vector<Edge*> edges) : val(x), edges(edges) {}
};



int recieveSignal(vector<vector<int>> network, int n, int k) {
    unordered_map<int, Node*> map;
    // create graph stored in hashmap
    for (vector<int> x : network) {
        Edge* etmp = new Edge(x.at(0), x.at(1), x.at(2));
        // check for Nodes Existence
        if (map.find(x.at(0)) == map.end()) {
            Node* ntmp = new Node(x.at(0), { etmp });
            map[x.at(0)] = ntmp;
        }
        else {
            map[x.at(0)]->edges.push_back(etmp);
        }
    }
    int visited = 0;
    int time = 0;
    queue<int> q;
    q.push(k);
    while (!q.empty()) {
        visited++; // increment visited nodes
        // if deadend continue
        if (map.find(q.front()) == map.end()) {
            q.pop();
            continue;
        }
        int distance = 0;

        Node* ntmp = map[q.front()];
        q.pop();
        // push children of edges to queue
        for (Edge* e : ntmp->edges) {
            q.push(e->child);
            distance = max(e->distance, distance);
        }
        time += distance;
    }
    return visited == n ? time : -1;
}

int main() {
    cout << recieveSignal({ {2,1,1},{2,3,1},{3,4,1} }, 4, 2) << endl;
    cout << recieveSignal({ {1,2,1} }, 2, 1) << endl;
    cout << recieveSignal({ {1,2,1} }, 2, 2) << endl;
    return 0;
}