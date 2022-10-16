//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        string lcp = "";
        string first = arr[0];
        if(N==1)
            return first;
            
        bool flag = false;
        for(int i=0;i<first.size();i++)
        {
            for(int j=1;j<N;j++)
            {
                if(i>=arr[j].size() || arr[j][i]!=first[i])
                    {
                        flag = true;
                        break;
                    }
            }
            if(flag )
                break;
            lcp+=first[i];
        }
        if(lcp.size()==0)
            return "-1";
        return lcp;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends