class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int x) {
        vector<int> v;
        int res = -1;
        int l = 0,r = nums.size()-1;
        while(l<=r)
        {
            int m = (l+r)/2;
            if(nums[m]==x)
            {
               // cout<<m<<endl;
                res = m;
                r=m-1;
               // cout<<l<<" "<<
            }
            else if(x<nums[m])
                r = m-1;
            else
                l = m+1;
        }
        v.push_back(res);
        res = -1;
        l = 0, r = nums.size()-1;
        while(l<=r)
        {
            int m = (l+r)/2;
            if(nums[m]==x)
            {
                res = m;
                l = m+1;
            }
            if(x<nums[m])
                r = m-1;
            else
                l = m+1;
        }
        v.push_back(res);
        return v;
    }
};