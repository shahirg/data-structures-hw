#include <vector>
using namespace std;
class Solution {
public:
    int longestIncPath(vector<vector<int>> matrix) {
        int rows = matrix.size(), cols = matrix[0].size();
        // store computed longest path from given spot
        vector<vector<int>> mem(rows, vector<int>(cols, -1));
        int longestPath = 1;
        for (int r = 0; r < rows; r++) {
            for (int c = 0; c < cols; c++) {
                int temp = 1 + dfs(matrix, r, c, mem);
                longestPath = longestPath < temp ? temp : longestPath;
            }
        }
        return longestPath;
    }
    int dfs(vector<vector<int>>& matrix, int r, int c, vector<vector<int>>& mem) {
        if (mem[r][c] != -1)
            return mem[r][c];
        int count = 0;
        int temp;
        if (checkBounds(r - 1, c, matrix.size(), matrix.at(0).size()) && matrix[r - 1][c] > matrix[r][c]) {
            temp = 1 + dfs(matrix, r - 1, c, mem);
            count = count < temp ? temp : count;
        }
        if (checkBounds(r + 1, c, matrix.size(), matrix.at(0).size()) && matrix[r + 1][c] > matrix[r][c]) {
            temp = 1 + dfs(matrix, r + 1, c, mem);
            count = count < temp ? temp : count;
        }
        if (checkBounds(r, c - 1, matrix.size(), matrix.at(0).size()) && matrix[r][c - 1] > matrix[r][c]) {
            temp = 1 + dfs(matrix, r, c - 1, mem);
            count = count < temp ? temp : count;
        }
        if (checkBounds(r, c + 1, matrix.size(), matrix.at(0).size()) && matrix[r][c + 1] > matrix[r][c]) {
            temp = 1 + dfs(matrix, r, c + 1, mem);
            count = count < temp ? temp : count;
        }
        return mem[r][c] = count;
    }
    bool checkBounds(int r, int c, int rows, int cols) {
        return r >= 0 && c >= 0 && r < rows&& c < cols;
    }
};