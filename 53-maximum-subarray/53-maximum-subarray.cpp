class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum =INT_MIN;
        int tmpSum = 0;
        for(int i=0;i<nums.size();i++)
        {
            tmpSum+=nums[i];
            //cout<<tmpSum<<endl;
            if(tmpSum>maxSum)
                maxSum = tmpSum;
            if(tmpSum<0)
                tmpSum = 0;
        }
        
        return maxSum;
    }
};