class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                    q.push({i,j});
                else
                    mat[i][j] = -1;
            }
        }
        
        int delx[] = {-1,1,0,0};
        int dely[] = {0,0,-1,1};
        while(!q.empty())
        {
            auto tp = q.front();
            q.pop();
            for(int i=0;i<4;i++)
            {
                int cx = delx[i]+tp.first;
                int cy = dely[i]+tp.second;
                if(cx>=0 && cy>=0 && cx<n && cy<m && mat[cx][cy]==-1)
                {
                    mat[cx][cy] = mat[tp.first][tp.second]+1;
                    q.push({cx,cy});
                }
            }
        }
        return mat;
    }
};