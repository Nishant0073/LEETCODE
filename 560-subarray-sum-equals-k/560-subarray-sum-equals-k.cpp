class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>mp;
        mp[0] = 1;
        int sum = 0;
        int ans = 0;
        for(auto it:nums)
        {
            sum+=it;
            
            if(mp.find(sum-k)!=mp.end())
                ans+=mp[sum-k];
            mp[sum]++;
        }
        // for(auto it:mp)
        //     cout<<it.first<<" "<<it.second<<endl;
        return ans;
    }
};