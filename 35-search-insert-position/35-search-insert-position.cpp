class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int l = 0,r = nums.size()-1;
        int res = nums.size();
        while(l<=r)
        {
            int m = (l+r)/2;
            if(nums[m]==target)
                return m;
            if(nums[m]<target)
                l = m+1;
            else
            {
                res = min(res,m);
                r = m-1;
            }
        }
        return res;
    }
};