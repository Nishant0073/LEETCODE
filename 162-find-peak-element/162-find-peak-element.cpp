class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int l = 0,r = n-1;
        
        if(n==1)
            return 0;
        while(l<=r)
        {
            int m = (l+(r-l)/2);
            
            if((m==0 && nums[m+1]<nums[0]) || (m==n-1 && nums[n-1]>nums[n-2]) || (m!=0 && nums[m]>nums[m-1] && nums[m]>nums[m+1] && m!=n-1))
                return m;
            else if(nums[m+1]>nums[m])
                 l = m+1;
            else
                 r=m -1;
        }
        return -1;
    }
};