class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        
        if(image[sr][sc]==color)
            return image;
       
        queue<pair<int,int>> que;
        que.push({sr,sc});
       
        int repcolor = image[sr][sc];
        int delr[] = {-1,1,0,0};
        int delc[] = {0,0,-1,1};
        while(!que.empty())
        {
            auto frnt = que.front();
            que.pop();
            int r = frnt.first;
            int c = frnt.second;
            image[r][c] = color;
            for(int i=0;i<4;i++)
            {
                int nowr = r+delr[i];
                int nowc = c+delc[i];
            if(nowr>=0 &&  nowr<n && nowc<m && nowc>=0 && image[nowr][nowc]==repcolor ){
                   
                    que.push({nowr,nowc});
                }
            }
            
        }
        return image;
    }
};