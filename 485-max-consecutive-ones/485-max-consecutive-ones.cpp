class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx = 0;
        int i = 0;
        int n  = nums.size();
        while(i<n)
        {
            if(nums[i]==1)
            {
                int in = i;
                while(i<n && nums[i]==1)
                    i = i+1;
                mx = max(mx, i-in);
            }
            else
                i = i+1;
        }
        return mx;
    }
};