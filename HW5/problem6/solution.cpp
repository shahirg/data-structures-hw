#include "solution.hpp"
#include <algorithm>
#include <iostream>
using std::vector;
using std::string;
vector<string> Solution::findAllConcatenatedWordsInADict(vector<string>& words) {
    vector<string> out;
    // sort words by length O(nlogn)
    std::sort(words.begin(), words.end(), []
    (const std::string& first, const std::string& second) {
            return first.size() > second.size();
        });

    string temp;
    string* temp2;
    int index;
    for (int i = 0; i < words.size(); i++) {
        temp = words.at(i);
        std::cout << temp << std::endl;
        for (int j = i + 1; j < words.size(); j++) {
            std::cout << "test" << std::endl;
            *temp2 = words.at(j);
            std::cout << temp << std::endl;
            while ((index = (temp).find(*temp2)) != string::npos) {
                // reformat string
                temp.erase(index, (*temp2).length());
                std::cout << temp << std::endl;
            }
        }
        if (temp.length() == 0) {
            out.push_back(words.at(i));
        }
    }
    return words;
}