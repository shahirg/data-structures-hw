#include "solution.hpp"

int Solution::getPrimes(int n) {
    int count = 0;
    for (int i = 1; i < n; i += 2) {
        if (isPrime(i))
            count++;
    }
    return count;
}

bool Solution::isPrime(int n) {
    for (int i = 2; i < n / 2; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}