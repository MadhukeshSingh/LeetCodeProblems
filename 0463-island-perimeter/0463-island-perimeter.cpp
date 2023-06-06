class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size(); 
         if( n==0 || m==0)
                  return 0;

                int count = 0;
                for (int i = 0; i < n; i ++)
                {
                    for (int j = 0; j <m; j ++) 
                    {
                        if (grid[i][j] == 1) 
                        {
                            count += 4;
                            if (j - 1 >= 0 && grid[i][j-1] == 1)
                                count -= 2;
                            if (i - 1 >= 0 && grid[i-1][j] == 1)
                                count -= 2;
                        }
                    }
                }
                return count;
        }
};