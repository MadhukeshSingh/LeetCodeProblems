class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int ans=0,r=grid.size(),c=grid[0].size();
        int dir_r[]={1,-1,0,0};  
        int dir_c[]={0,0,1,-1}; 
        vector<vector<bool>> vis(r,vector(c,false));

        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]=='0' || vis[i][j])  
                    continue;
                queue<pair<int,int>> q;
                q.push({i,j});
                ans++;
                vis[i][j]=true;
                while(!q.empty()){
                    auto pre=q.front();
                    q.pop();
                    for(int d=0;d<4;d++){
                        int qr= pre.first + dir_r[d];
                        int qc= pre.second + dir_c[d];
                        if(qr<0 || qr >= r || qc<0 || qc>= c)
                            continue;
                        if(grid[qr][qc]=='0') continue;  
                        if(vis[qr][qc]) continue;  
                        q.push({qr,qc});
                        vis[qr][qc]=true;
                    }                    
                }
            }
        } 
        return ans;        
    }
};
