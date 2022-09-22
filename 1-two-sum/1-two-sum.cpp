class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
         vector<int> v;
        for(int i=0;i<nums.size();i=i+1)
        {
            if(mp.find(k-nums[i])!=mp.end())
            {
                v= {mp[k-nums[i]],i};
                return v;
            }
            mp[nums[i]] = i;
        }
        return v;
        
    }
};