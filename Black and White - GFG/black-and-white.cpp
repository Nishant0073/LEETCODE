//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

long long numOfWays(int n, int m);

int main() {
    // code
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        cout << numOfWays(n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends


//Function to find out the number of ways we can place a black and a 
//white Knight on this chessboard such that they cannot attack each other.
long long numOfWays(int N, int M)
{
    // write code here
    long long total = N*M;
    int delx[] = {-1,+1,+2,+2,+1,-1,-2,-2};
    int dely[] = {-2,-2,-1,+1,+2,+2,+1,-1};
    long long mod = 1000000007;
    long long ans = 0;
    for(int i=0;i<N;i++)
    {
        for(int j=0;j<M;j++)
        {
            int cnt = 1;
            for(int k=0;k<8;k++)
            {
                int cx = i+delx[k];
                int cy = j+dely[k];
                if(cx>=0 && cy>=0 && cx<N && cy<M)
                    cnt++;
            }
            ans= (ans+(total-cnt))%mod;
        }
    }
    return ans;
}