class Solution {
public:
    int search(vector<int>& nums, int k) {
        int l = 0,r = nums.size()-1;
        while(l<=r)
        {
            int m = (l+r)/2;
            if(nums[m]==k)
                return m;
            if(nums[l]<=nums[m])
            {
                if(k>=nums[l] && k<=nums[m])
                    r=m-1;
                else
                    l=m+1;
            }
            else
            {
                if(k>=nums[m] && nums[r]>=k)
                    l=m+1;
                else
                    r=m-1;
            }
        }
        return -1;
        
    }
};