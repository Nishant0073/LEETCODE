//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isItPossible(string S, string T, int M, int N) {
        // code here
        vector<pair<char,int>> s1,s2;
        
        for(int i=0;i<S.size();i++)
        { 
            if(S[i]=='A')
                s1.push_back({'A',i});
            if(S[i]=='B')
                s1.push_back({'B',i});
        }
        
        for(int i=0;i<T.size();i++)
        { 
            if(T[i]=='A')
                s2.push_back({'A',i});
            if(T[i]=='B')
                s2.push_back({'B',i});
        }
        
        if(s1.size()!=s2.size())
         return 0;
        
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i].first=='A')
            {
                if(s2[i].first!='A')
                  return false;
                if(s1[i].second<s2[i].second)
                    return 0;
            }
            
            if(s1[i].first=='B')
            {
                if(s2[i].first!='B')
                  return false;
                if(s1[i].second>s2[i].second)
                    return 0;
            }
        }
        return true;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S, T;
        cin >> S >> T;
        int M = S.length(), N = T.length();
        Solution ob;
        cout << ob.isItPossible(S, T, M, N);
        cout << "\n";
    }
}
// } Driver Code Ends