class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
  int ans=0;
        int m=grid.size();
        int n=grid[0].size();
        
        for(auto &v:grid){
            sort(v.begin(), v.end());
        }
        sort(grid.begin(), grid.end());
        
        for(int j=n-1;j>=0;j--){
            int maxi=0;
            for(int i=m-1;i>=0;i--){
                maxi=max(maxi, grid[i][j]);
            }
            ans+=maxi;
        }
        return ans;
    }
};