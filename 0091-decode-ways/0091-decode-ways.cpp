class Solution {
public:
    int getWays(string s,int i,int n,map<string,bool> &mp,vector<int> &dp)
    {
        if(i==n)
            return 1;
        if(dp[i]!=-1)
            return dp[i];
        string s1="";
        s1+=s[i];
        string s2 = "";
        if(i+1<n)
        {
            s2+=s[i];
            s2+=s[i+1];
        }
        int cnt1 = 0;
        int cnt2 = 0;
        if(mp[s1])
             cnt1 = getWays(s,i+1,n,mp,dp);
        if(mp[s2])
             cnt2 = getWays(s,i+2,n,mp,dp);
        dp[i] = cnt1+cnt2;
        return dp[i];
    }
    int numDecodings(string s) {
        map<string,bool> mp;
        for(int i=1;i<=26;i++)
        {
            string str = to_string(i);
            mp[str] = true;
        }
        vector<int> dp(s.size()+1,-1);
        int cnt = getWays(s,0,s.size(),mp,dp);
        return cnt;
        
    }
};