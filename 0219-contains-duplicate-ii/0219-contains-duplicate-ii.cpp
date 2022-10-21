class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int n = nums.size();
        for(int i=0;i<n && i<=k;i++)
        {
            mp[nums[i]] = mp[nums[i]]+1;
            if(mp[nums[i]]>=2)
                return true;
        }
        if(k==0)
            return false;
        
        for(int i=k+1;i<n;i++)
        {
            mp[nums[i-k-1]] = mp[nums[i-k-1]]-1;
            mp[nums[i]] = mp[nums[i]] +1;
            if(mp[nums[i]]>=2)
                return true;
        }
        return false;
    }
};