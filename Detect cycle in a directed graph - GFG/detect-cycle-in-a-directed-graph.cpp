//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool dfs(vector<bool> &vis,vector<bool> &res,int node,vector<int> adj[])
    {
        vis[node] = true;
        res[node] = true;
        for(auto it:adj[node])
        {
            if(vis[it] && res[it])
                return true;
            if(!vis[it])
            {
                if(dfs(vis,res,it,adj))
                    return true;
            }
        }
        res[node] = false;
        return false;
    }
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        vector<bool> vis(V,false);
        vector<bool> res(V,false);
        for(int i=0;i<V;i++)
        {
            if(!vis[i])
            {
                if(dfs(vis,res,i,adj))
                    return true;
            }
        }
        return false;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int V, E;
        cin >> V >> E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        cout << obj.isCyclic(V, adj) << "\n";
    }

    return 0;
}

// } Driver Code Ends