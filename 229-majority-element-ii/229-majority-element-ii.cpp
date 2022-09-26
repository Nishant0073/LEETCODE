class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0;
        int cnt2 = 0;
        int num1 = INT_MIN;
        int num2 = INT_MIN;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(num1==nums[i])
                cnt1++;
            else if(num2==nums[i])
                cnt2++;
            else if(cnt1==0)
            {
                cnt1 = 1;
                num1 = nums[i];
            }
            else if(cnt2==0)
            {
                cnt2 = 1;
                num2 =  nums[i];
            }
            else
            {
                cnt1--;
                cnt2--;
            }
        }
        vector<int>v;
        cnt1 = 0;
        cnt2 = 0;
        for(int i=0;i<n;i++)
        {
            if(num1==nums[i])
                cnt1++;
            if(num2==nums[i])
                cnt2++;
        }
    
        if(cnt1>(n/3))
            v.push_back(num1);
        if(cnt2>(n/3))
            v.push_back(num2);
        
        return v;
    }
};