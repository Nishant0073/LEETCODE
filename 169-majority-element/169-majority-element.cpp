class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0,ma = 0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(ma==nums[i])
                cnt++;
            else
            {
               if(cnt==0)
               {
                   ma = nums[i];
                   cnt++;
               }
                else
                    cnt--;
            }
        }
        return ma;
    }
};