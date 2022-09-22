class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0,ma = 0;
        for(int i=0;i<nums.size();i++)
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