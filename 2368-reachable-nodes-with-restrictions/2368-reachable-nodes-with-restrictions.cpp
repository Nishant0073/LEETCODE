class Solution {
public:
    
    void dfs(int node,int &cnt,vector<int> adj[] ,vector<int> &vis)
    {
        cnt++;
        vis[node] = true;
        for(auto it:adj[node])
        {
            if(!vis[it])
                dfs(it,cnt,adj ,vis);
        }
        return;
    }
    int reachableNodes(int n, vector<vector<int>>& edges, vector<int>& restricted) {
        vector<int> adj[n];
        for(auto it:edges)
        {
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        vector<int> vis(n,false);
        for(auto it:restricted)
            vis[it] = true;
     
        int cnt = 0;
        dfs(0,cnt,adj,vis);
        return cnt;
    }
};