//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int getMaxProfit(int i,int w,int val[],int wt[],vector<vector<int>> &dp)
    { 
        if(i<0)
            return 0;
        if(dp[i][w]!=-1)
            return dp[i][w];
        if(w-wt[i]>=0)
            return dp[i][w] = max(getMaxProfit(i,w-wt[i],val,wt,dp)+val[i],getMaxProfit(i-1,w,val,wt,dp));
        else
            return dp[i][w] = getMaxProfit(i-1,w,val,wt,dp);
    }
    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
       int dp[N+1][W+1];
       
       for(int i=0;i<=N;i++)
        for(int j=0;j<=W;j++)
            dp[i][j]  = 0;
       
       for(int i=1;i<=N;i++)
       {
           for(int j=1;j<=W;j++)
           {
                 if(wt[i-1]<=j)
                    dp[i][j] = max(dp[i][j-wt[i-1]]+val[i-1],dp[i-1][j]);
                 else
                    dp[i][j] = dp[i-1][j];
               
           }
       }
       
       return dp[N][W];
     
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends