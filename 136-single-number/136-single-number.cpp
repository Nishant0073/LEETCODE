class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        for(int i=1;i<n;i=i+1)
            nums[i] = nums[i-1]^nums[i];
        return nums[nums.size()-1];
    }
};