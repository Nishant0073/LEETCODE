class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        long l = 0;
        long r = 0;
        long sum = 0;
        long ans = 0;
        sort(nums.begin(),nums.end());
        while(r<nums.size())
        {
            sum+=nums[r];
            while((r-l+1)*nums[r]>(sum+k))
            {
                sum-=nums[l];
                l++;
            }
            ans = max(ans,(r-l+1));
            r++;
        }
        return ans;
    }
};