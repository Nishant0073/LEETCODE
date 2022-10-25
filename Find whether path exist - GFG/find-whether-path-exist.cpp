//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    bool bfs(int x,int y,vector<vector<int>>& grid,int n)
    {
        vector<vector<bool>>vis(n,vector<bool>(n,false));

        int delx[] = {1,-1,0,0};
        int dely[] = {0,0,-1,1};
        queue<pair<int,int>> q;
        q.push({x,y});
        while(!q.empty())
        {
            auto tp = q.front();
            q.pop();
            int tx = tp.first;
            int ty = tp.second;
            for(int i=0;i<4;i++)
            {
                int cx = tx+delx[i];
                int cy = ty+dely[i];
                if(cx>=0 && cy>=0 && cx<n && cy<n)
                {
                    if(grid[cx][cy]==2)
                        return true;
                    if(grid[cx][cy]==3){
                    grid[cx][cy] = 0;
                    q.push({cx,cy});
                    }
                }
            }
        }
        return false;
        
    }
    bool is_Possible(vector<vector<int>>& grid) 
    {
        //code here
        int n = grid.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]==1)
                {
                    if(bfs(i,j,grid,n))
                        return true;
                    else
                        return false;
                }
                
            }
        }
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}
// } Driver Code Ends