class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
          queue<pair<int,int>>q;
            int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if((i==0 || j==0 || j==m-1 || i==n-1) && grid[i][j]==1)
                {
                    q.push({i,j});
                    grid[i][j] = 0;
                }
            }
        }
        int delx[] = { -1, 1, 0, 0};
        int dely[] = {  0, 0, -1, 1};
        while(!q.empty())
        {
            auto tp = q.front();
            q.pop();
            int x = tp.first;
            int y = tp.second;
            for(int i=0;i<4;i++)
            {
                int cx = delx[i]+x;
                int cy = dely[i]+y;
                if(cx>=0 && cy>=0 && cx<n && cy<m && grid[cx][cy]==1)
                {
                    grid[cx][cy] = 0;
                    q.push({cx,cy});
                }
            }
        }
        int cnt = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j])
                    cnt++;
            }
        }
        return cnt;
        
    }
};