class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int mn = nums[0];
        int mx = nums[0];
        int res = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            int tmp = max({nums[i],mx*nums[i],mn*nums[i]});
            mn = min({nums[i],mx*nums[i],mn*nums[i]});
            mx = tmp;
            res = max(res,mx);
        }
        return res;
        
    }
};