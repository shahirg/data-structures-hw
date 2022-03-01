#include <stack>
#include <vector>
#include <unordered_map>
class FreqStack {
public:
    std::unordered_map<int, int> umap;
    std::vector<std::stack<int>> stk;
    int highestFreq;
    FreqStack();
    void push(int val);
    int pop();
};
