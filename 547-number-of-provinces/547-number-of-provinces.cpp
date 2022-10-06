class Solution {
public:
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<int> adj[n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i!=j && isConnected[i][j]==1)
                {
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        
        vector<bool> vis(n,false);
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            if(!vis[i])
            {
                cnt++;
                queue<int> que;
                que.push(i);
                vis[i] = true;
                while(!que.empty())
                {
                    int top = que.front();
                    que.pop();
                    for(auto it:adj[top])
                    {
                        if(!vis[it])
                        {
                            vis[it] = true;
                            que.push(it);
                        }
                    }
                }
            }
        }
        return cnt;
    }
};