class Solution {
public:
    int dp[31][1001] = {};
    int numRollsToTarget(int n, int k, int target,int ans=0) {
        if(target==0 && n==0)
            return 1;
        if(target<0 || n==0)
            return 0;
        if(dp[n][target])
            return dp[n][target]-1;
        
        for(int i=1;i<=k;++i)
            ans=( ans + numRollsToTarget(n-1,k,target-i))%1000000007;
        dp[n][target] = ans+1;
        return ans;
        }

    };