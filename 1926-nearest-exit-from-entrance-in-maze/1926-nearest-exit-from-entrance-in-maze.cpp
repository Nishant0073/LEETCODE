class Solution {
public:
    int nearestExit(vector<vector<char>>& maze, vector<int>& entrance) {
    queue<pair<pair<int,int>,int>> q;
        
        q.push({{entrance[0],entrance[1]},0});
        int n = maze.size();
        int m = maze[0].size();
        int delx[] = { -1, 1 , 0 , 0};
        int dely[] = {  0, 0 , -1, 1};
        int ans = INT_MAX;
        while(!q.empty())
        {
            auto tmp = q.front();
            q.pop();
            int x = tmp.first.first;
            int y = tmp.first.second;
            
            int step =  tmp.second;
            if((x==0 || y==0 || x==n-1 || y==m-1) && !(x==entrance[0] && y==entrance[1]))
            {
            
                    ans = min(ans,step);
            }
            else
            {
                for(int i=0;i<4;i++)
                {
                    int cx = x + delx[i];
                    int cy = y + dely[i];
                    if(cx>=0 && cx<n && cy>=0 && cy<m && maze[cx][cy]=='.')
                    {
                        maze[cx][cy] = '+';
                        q.push({{cx,cy},step+1});
                    }
                }
            }
            
            
        }
        
        if(ans==INT_MAX)
            return -1;
        else
            return ans;
    }
};