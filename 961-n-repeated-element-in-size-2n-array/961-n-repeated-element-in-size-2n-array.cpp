class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        for(int i=1;i<nums.size();i++)
        {
            if(i-1>=0 && nums[i]==nums[i-1])
                return nums[i];
            if(i-2>=0 && nums[i]==nums[i-2])
                return nums[i];
            if(i-3>=0 && nums[i]==nums[i-3])
                return nums[i];
        }
        return -1;
    }
};