class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        queue<pair<int,int>> q;
        int delx[] = { -1, 1,  0, 0, 1, -1, 1, -1};
        int dely[] = {  0, 0, -1, 1, 1, -1, -1, 1};
        if(grid[0][0]==1)
            return -1;
        grid[0][0] = 1;
        q.push({0,0});
        while(!q.empty())
        {
            int x = q.front().first;
            int y = q.front().second;
            if(x==n-1 && y==m-1)
                return grid[x][y];
                
            q.pop();
            for(int i=0;i<8;i++)
            {
                int cx = x+delx[i];
                int cy = y+dely[i];
                if(cx>=0 && cy>=0 && cx<n && cy<m && grid[cx][cy]==0)
                {
                    grid[cx][cy] = grid[x][y]+1;
                    q.push({cx,cy});
                }
            }
        }
        return -1;
        
    }
};