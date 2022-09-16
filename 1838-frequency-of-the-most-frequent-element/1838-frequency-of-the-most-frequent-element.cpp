class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long long l=0,r=0;
        long long sum =0;
        long long ans = 0;
        while(r<nums.size())
        {
            sum+=nums[r];
            while((nums[r]*(r-l+1))-sum>(k))
            {
               
               sum-=nums[l];
                l++;
            }
            ans=max(ans,(r-l+1));
             r++;
        }
        return ans;
        
    }
};