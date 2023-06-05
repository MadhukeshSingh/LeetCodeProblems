class Solution {
private:
    void dfs(int node, vector<vector<int>> &adj, vector<int>&vis){
        vis[node]  = 1;
        for(auto it: adj[node]){
            if(!vis[it]){
                dfs(it, adj, vis);
            }
        }
    }
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int m = isConnected.size();
        int n = isConnected[0].size();
        vector<vector<int>> adj(m);
        for(int i = 0; i<m ; i++){
            for(int j = 0; j<m; j++){
               if(isConnected[i][j] == 1 && i!=j){
                   adj[i].push_back(j);
                   adj[j].push_back(i);
               }
            }
        }
        vector<int> vis(m,0);
        int count = 0;
        for(int i = 0; i<n; i++){
            if(!vis[i]){
                count++;
                dfs(i,adj,vis);
            }
        }
        return count;
    }
};