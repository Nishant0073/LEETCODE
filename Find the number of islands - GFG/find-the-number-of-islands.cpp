//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to find the number of islands.
    void bfs(vector<vector<char>>& grid,int x,int y)
    {
        queue<pair<int,int>> q;
        q.push({x,y});
        grid[x][y] = '0';
        int delx[]={-1, 1, 0, 0, -1, 1,-1, 1};
        int dely[]={ 0, 0,-1, 1, -1, 1, 1,-1};
        while(!q.empty())
        {
            auto tp = q.front();
            q.pop();
            x = tp.first;
            y = tp.second;
            for(int i=0;i<8;i++)
            {
                int cx = x+delx[i];
                int cy = y+dely[i];
                if(cx>=0 && cy>=0 && cx<grid.size() && cy<grid[0].size() && grid[cx][cy]=='1')
                {
                    grid[cx][cy] = '0';
                    q.push({cx,cy});
                }
            }
        };
    }
    int numIslands(vector<vector<char>>& grid) {
        // Code here
        int cnt = 0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]=='1')
                {
                    cnt++;
                    bfs(grid,i,j);
                }
                
            }
        }
        return cnt;
        
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends