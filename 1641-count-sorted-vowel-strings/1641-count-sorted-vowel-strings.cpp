class Solution {
public:
    int countVowelStrings(int n) {
        int dp[n+1][5];
        for(int i=5;i>0;i--)
            dp[0][5-i] = i;
        for(int i=1;i<n;i++)
        {
            for(int j=4;j>=0;j--)
            {
                dp[i][j] = dp[i-1][j];
                if(j!=4)
                    dp[i][j] +=dp[i][j+1];
            }
        }
        return dp[n-1][0];
        
    }
};