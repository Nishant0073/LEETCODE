class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int mx = 0;
        int i = 0;
        while(i<nums.size())
        {
            if(nums[i]==1)
            {
                int in = i;
                while(i<nums.size() && nums[i]==1)
                    i++;
                mx = max(mx, i-in);
                
            }
            else
                i++;
        }
        return mx;
    }
};