#include <iostream>
#include <vector>
#include "solution1.h"
using namespace std;

void printVector(vector<int>& nums) {
    cout << "[";
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << ((i != (nums.size() - 1)) ? "," : "");
    }
    cout << "]\n";

}
int main() {
    Solution s;
    vector<int> vect{ 6,4,3,7,1,2,13 }, output1, output2;
    output1 = s.twoSum(vect, 4);
    output2 = s.twoSumEfficient(vect, 4);
    cout << "twoSum Output: ";
    printVector(output1);
    cout << "twoSumEfficient Output: ";
    printVector(output2);
    return 0;
}
