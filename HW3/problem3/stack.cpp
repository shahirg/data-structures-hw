#include "stack.h"

template <typename T>
Stack<T>::Stack(int n) {
    Stack::size = n;
    Stack::stk = new T[size];
    Stack::top = 0;
}
template <typename T>
void Stack<T>::push(T val) {
    *(Stack::stk + Stack::top) = val;
    Stack::top++;
}
template <typename T>
char Stack<T>::pop(T val) {
    Stack::top--;
    return *(Stack::stk + (Stack::top + 1));
}