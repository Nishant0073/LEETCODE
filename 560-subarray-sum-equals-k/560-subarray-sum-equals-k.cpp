class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0] = 1;
        int sum = 0;
        int ans = 0;
        for(auto it:nums)
        {
            sum+=it;
            
            if(mp.find(sum-k)!=mp.end())
                ans= ans + mp[sum-k];
            mp[sum] = mp[sum]+1;
        }
        return ans;
    }
};