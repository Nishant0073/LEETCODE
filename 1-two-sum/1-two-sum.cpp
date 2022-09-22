class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
         vector<int> v;
        int n = nums.size();
        for(int i=0;i<n;i=i+1)
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