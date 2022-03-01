#include "solution.hpp"
#include <iostream>
#include <queue>
using std::vector;
using std::queue;

int Solution::countBattleships(vector<vector<char>>& board) {
    int rows = board.size();
    int cols = board.at(0).size();
    int r, c;
    vector<vector<bool>> visited(rows, vector<bool>(cols, false));
    queue<vector<int>> pointsQ;
    vector<int> point;
    int ships = 0;
    for (int i = 0;i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (board.at(i).at(j) == 'X' && !visited.at(i).at(j)) {
                // std::cout << "(" << i << "," << j << ")" << std::endl;
                ships++;
                pointsQ.push({ i,j });
                //propogate
                while (!pointsQ.empty()) {
                    point = pointsQ.front();
                    pointsQ.pop();
                    r = point.at(0);
                    c = point.at(1);
                    visited.at(r).at(c) = true;
                    // std::cout << "test:(" << r << "," << c << ")" << std::endl;
                    //up
                    if (r - 1 > 0 && board.at(r - 1).at(c) == 'X' && !visited.at(r - 1).at(c)) {
                        pointsQ.push({ r - 1,c });
                    }
                    //down
                    if (r + 1 < rows && board.at(r + 1).at(c) == 'X' && !visited.at(r + 1).at(c)) {
                        pointsQ.push({ r + 1,c });
                    }
                    //left
                    if (c - 1 > 0 && board.at(r).at(c - 1) == 'X' && !visited.at(r).at(c - 1)) {
                        pointsQ.push({ r,c - 1 });
                    }
                    //right
                    if (c + 1 < cols && board.at(r).at(c + 1) == 'X' && !visited.at(r).at(c + 1)) {
                        pointsQ.push({ r,c + 1 });
                    }

                }
            }
        }
    }
    std::cout << board.size() << std::endl;
    return ships;
    // visited.resize(board.size(), vector<int>(board.at(0).size(), false));
}
