//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> querySum(int n, int arr[], int q, int queries[])
    {
        int pref[n+1];
        for(int i=0;i<=n;i++)
            pref[i] = 0;
            
        
        for(int i=0;i<n;i++)
            pref[i+1] = pref[i]+arr[i];
 
            
        vector<int> ans;
        for(int i=0;i<(q*2);i+=2)
        { 
            int l = pref[queries[i]-1];
            int r = pref[queries[i+1]];
            ans.push_back(r-l);
       
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, q;
        cin>>n;
        int arr[n];
        for(int i = 0;i < n;i++)
            cin>>arr[i];
        cin>>q;
        int queries[2*q];
        for(int i = 0;i < 2*q;i += 2)
            cin>>queries[i]>>queries[i+1];
        
        Solution ob;
        vector<int> ans = ob.querySum(n, arr, q, queries);
        for(int u: ans)
            cout<<u<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends