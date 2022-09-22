class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
         vector<int> v;
        for(int i=0;i<nums.size();i=i+1)
        {
            int val = k-nums[i];
            if(mp.find(val)!=mp.end())
            {
                v= {mp[val],i};
                return v;
            }
            mp[nums[i]] = i;
        }
        return v;
        
    }
};