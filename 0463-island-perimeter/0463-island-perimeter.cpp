class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        vector<int> DIR = {0, 1, 0, -1, 0};
            int row = grid.size(), col = grid[0].size(), perimeter = 0;
            for (int r = 0; r < row; ++r) {
                for (int c = 0; c < col; ++c) {
                    if (grid[r][c] == 0) continue; // Skip water cell
                    perimeter += 4;
                    for (int i = 0; i < 4; ++i) {
                        int nRow = r + DIR[i], nCol = c + DIR[i+1];
                        if (nRow < 0 || nRow == row || nCol < 0 || nCol == col || grid[nRow][nCol] == 0) continue;
                        perimeter -= 1;
                    }
                }
            }
            return perimeter;
        }
};