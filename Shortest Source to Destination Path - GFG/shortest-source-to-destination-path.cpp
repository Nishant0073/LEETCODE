//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int shortestDistance(int N, int M, vector<vector<int>> A, int X, int Y) {
        // code here
        queue<pair<int,int>> q;
        q.push({0,0});
        
        if(X==0 && Y==0)
            return 0;
        if(A[0][0]==0 || A[X][Y]==0)
            return -1;
        A[X][Y] = INT_MAX;
        int delx[] = {-1,1,0,0};
        int dely[] = {0,0,-1,1};
        vector<vector<bool>> vis(N,vector<bool>(M,false));
        vis[0][0] = true;
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
                if(cx>=0 && cy>=0 && cx<N  && cy<M && A[cx][cy]!=0)
                {
                    if(cx==X && cy==Y)
                    {
                        if(!vis[X][Y])
                        {
                            A[X][Y] = A[x][y];
                            vis[X][Y] = true;
                        }
                        else
                        {
                            A[X][Y] = min(A[x][y],A[X][Y]);
                        }
                    }
                    else if(!vis[cx][cy])
                    {
                        vis[cx][cy] = true;
                        A[cx][cy] = A[x][y]+1;
                        q.push({cx,cy});
                    }
                    
                }
            }
        }
        if(A[X][Y]==INT_MAX)
         return -1;  
        return A[X][Y];
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, x, y;
        cin >> N >> M;
        vector<vector<int>> v(N, vector<int>(M));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < M; j++) cin >> v[i][j];
        cin >> x >> y;
        Solution ob;
        cout << ob.shortestDistance(N, M, v, x, y) << "\n";
    }
}
// } Driver Code Ends