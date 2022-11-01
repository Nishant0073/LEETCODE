class Solution {
public:
    int solve(int m,int n,int i,int j,vector<vector<int>>& grid,int ball)
    {
        if(i>=m)
           return j;
        
        if(grid[i][j]==1)
        {
            if(j+1==n || grid[i][j]!=grid[i][j+1])
                return -1;
            return solve(m,n,i+1,j+1,grid,i);
        }
        else
        {
            if(j-1<0 || grid[i][j]!=grid[i][j-1])
            {
                
                return -1;
            }
            return solve(m,n,i+1,j-1,grid,i);
        }
    }
    vector<int> findBall(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int>a(n);
        for(int i=0;i<n;i++)
            a[i] = solve(m,n,0,i,grid,i);
        
        return a;
    }
};