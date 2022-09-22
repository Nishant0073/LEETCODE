class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt0 = 0;
        int cnt1 = 0;
        int cnt2 = 0;
        for(int i=0;i<nums.size();i=i+1)
        {
            if(nums[i]==0)
                cnt0 = cnt0+1;
            if(nums[i]==1)
                cnt1 = cnt1+1;
            if(nums[i]==2)
                cnt2 = cnt2+1;
        }
        int i=0;
        while(cnt0--)
            nums[i++] = 0;
        while(cnt1--)
            nums[i++] = 1;
        while(cnt2--)
            nums[i++] = 2;
         
    }
};