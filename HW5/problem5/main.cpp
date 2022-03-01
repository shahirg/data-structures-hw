#include <iostream>
#include "solution.hpp"
using namespace std;
using std::vector;

int main() {
    Solution s;
    vector<vector<char>> board(5, vector<char>(6, '.'));
    board.at(0).at(1) = 'X';
    board.at(0).at(2) = 'X';
    board.at(4).at(1) = 'X';
    board.at(4).at(2) = 'X';
    board.at(4).at(3) = 'X';
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board.at(i).size(); j++) {
            cout << board.at(i).at(j) << " ";
        }
        cout << endl;
    }
    cout << s.countBattleships(board) << endl;
    return 0;
}