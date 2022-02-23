#include <vector>
#include <algorithm>
using std::vector;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // itereate through all possible combinations, O(n^2)
        for (int i = 0; i < nums.size() - 1; i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                // when combination found return
                if (nums[i] + nums[j] == target) {
                    return { nums[i], nums[j] };
                }
            }
        }
        return {};
    }

    vector<int> twoSumEfficient(vector<int>& nums, int target) {

        sort(nums.begin(), nums.end()); // sort vector O(nlogn)
        int leftInd = 0, rightInd = nums.size() - 1; // declare ptrs
        int sum = nums[leftInd] + nums[rightInd]; // get sum
        // adjust index values until target found
        while (sum != target && leftInd < rightInd) { // O(n)
            if (sum < target)
                leftInd += 1;
            else if (sum > target)
                rightInd -= 1;
            sum = nums[leftInd] + nums[rightInd]; // get new sum
        }

        return { nums[leftInd], nums[rightInd] }; // return output
    }
};