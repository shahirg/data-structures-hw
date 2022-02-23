#include <vector>
template <typename T>
class Stack {
public:
    Stack(int n);
    void push(T val);
    char pop(T val);
private:
    int top, size;
    T* stk;
    // std::vector<char> stk;
};
