class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int mxsum = nums[0];
        int mnsum = nums[0];
        int res = nums[0];
        for(int i=1;i<nums.size();i++)
        {
            int tmp = max({nums[i],mxsum*nums[i],mnsum*nums[i]});
            mnsum = min({nums[i],mxsum*nums[i],mnsum*nums[i]});
            mxsum = tmp;
            res = max(res,mxsum);
        }
        return res;
    }
};