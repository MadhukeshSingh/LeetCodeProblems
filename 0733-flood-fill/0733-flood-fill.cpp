class Solution {
private:
    void dfs(int row, int col, vector<vector<int>>& image, vector<vector<int>>& res, int newColor, vector<int>& delRow, vector<int>& delCol, int iniColor) {
        res[row][col] = newColor;
        int n = image.size();
        int m = image[0].size();
        for (int i = 0; i < 4; i++) {
            int nRow = row + delRow[i];
            int nCol = col + delCol[i];
            if (nRow >= 0 && nRow < n && nCol >= 0 && nCol < m && image[nRow][nCol] == iniColor && res[nRow][nCol] != newColor) {
                dfs(nRow, nCol, image, res, newColor, delRow, delCol, iniColor);
            }
        }
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int n = image.size();
        int m = image[0].size();
        vector<vector<int>> res = image;
        vector<int> delRow = {-1, 0, 1, 0};
        vector<int> delCol = {0, 1, 0, -1};
        int iniColor = image[sr][sc];
        dfs(sr, sc, image, res, newColor, delRow, delCol, iniColor);
        return res;
    }
};
