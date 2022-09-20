class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = (n*(n+1)/2);
        int tsum = 0;
        for(auto i:nums)
            tsum+=i;
        return (sum-tsum);
    }
};