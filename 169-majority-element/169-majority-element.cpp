class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0,ma = -1;
        for(auto it:nums)
        {
            if(ma==it)
                cnt=cnt+1;
            else
            {
               if(cnt==0)
               {
                   ma = it;
                   cnt=cnt+1;
               }
                else
                    cnt=cnt-1;
            }
        }
        return ma;
    }
};