#include "FreqStack.hpp"
#include <iostream>
FreqStack::FreqStack() {
    // hashtable for frequency
    // freqstk for keeping track of frequency
    // int highestFreq
    this->highestFreq = 0;
}
void FreqStack::push(int val) {
    // get new count
    int count = this->umap.find(val) == this->umap.end() ? 1 : umap[val] + 1;
    // update hashtable
    umap[val] = count;
    // check if need to append new stack
    if (this->stk.size() < count) {
        std::stack<int> tempstk;
        tempstk.push(val);
        this->stk.push_back(tempstk);
    }
    else {
        this->stk.at(count - 1).push(val);
    }
}
int FreqStack::pop() {
    // pop from last stack
    int temp = this->stk.back().top();
    this->stk.back().pop();
    // pop from vector if last stk empty
    if (this->stk.back().empty())
        this->stk.pop_back();
    return temp;
}