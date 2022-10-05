class Solution {
public:
    bool findMatch(string s,string p,int i,int j, vector<vector<int>> &dp)
    {
        if(i<0 && j<0)
            return true;
        if(i<0)
        {
            while(j>=0 && p[j]=='*')
                j--;
            if(j<0)
                return true;
            return false;
        }
        if(j<0)
            return false;
        if(dp[i][j]!=-1)
            return dp[i][j];
        
        if(s[i]==p[j] || p[j]=='?')
            return dp[i][j] = findMatch(s,p,i-1,j-1,dp);
        else if(p[j]=='*')
            return  dp[i][j] = (findMatch(s,p,i-1,j,dp) || findMatch(s,p,i,j-1,dp));
        else
            return false;
            
    }
    bool isMatch(string s, string p) {
         int n = s.size();
        int m = p.size();
        vector<vector<bool>> dp (n+1,vector<bool>(m+1,false));
        // return findMatch(s,p,s.size()-1,p.size()-1,dp);
        dp[0][0] = true;
        int k=0;
       
        while(k<m && p[k]=='*')
        {
            dp[0][k+1] = true;
            k++;
        }
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(s[i]==p[j] || p[j]=='?')
                    dp[i+1][j+1] = dp[i][j];
                else if(p[j]=='*')
                    dp[i+1][j+1] = (dp[i][j+1] || dp[i+1][j]);
                else
                    dp[i+1][j+1] = false;
            }
        }
        return dp[n][m];
       
        
    }
};