class Solution {
public:
    void sortColors(vector<int>& nums) {
        int cnt0 = 0;
        int cnt1 = 0;
        int cnt2 = 0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
                cnt0++;
            if(nums[i]==1)
                cnt1++;
            if(nums[i]==2)
                cnt2++;
        }
        int i=0;
        while(cnt0)
        {
            nums[i] = 0;
            cnt0 = cnt0-1;
            i = i+1;
        }
        while(cnt1)
        {
            nums[i] = 1;
            cnt1 = cnt1-1;
            i = i+1;
        }
        while(cnt2)
        {
            nums[i] = 2;
            cnt2 = cnt2-1;
            i = i+1;
        }
         
    }
};