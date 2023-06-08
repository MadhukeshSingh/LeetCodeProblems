class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {

        int n = grid.size();
        int m = grid[0].size();
        int negatives = 0;
        int col = 0;
        for (int i = n-1 ; i>-1;i--){
            while (col < m and grid[i][col] >= 0){
                col += 1;
            }
            negatives += m - col;
            }
        return negatives;
    }
};