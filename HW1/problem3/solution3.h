#include<vector>
#include <limits.h>
using std::vector;
struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* out = nullptr;
        ListNode* out_ptr = nullptr;
        int min, min_ind;
        for (;;) { // loop indefinitely
            min = INT_MAX;
            min_ind = 0;
            // loop through list
            for (int i = 0; i < lists.size(); i++) {
                if (lists.at(i) == nullptr)
                    continue;
                if (lists.at(i)->val < min) { // check min
                    min = lists.at(i)->val;
                    min_ind = i;
                }
            }
            if (min == INT_MAX) // break when all lists empty
                break;
            if (out == nullptr) { // start condition
                out = lists.at(min_ind);
                out_ptr = out;
            }
            else { // evertyhing else
                out_ptr->next = lists.at(min_ind);
                out_ptr = out_ptr->next;
            }
            // iterate ptr
            lists.at(min_ind) = lists.at(min_ind)->next;

        }
        return out;

    }
};
