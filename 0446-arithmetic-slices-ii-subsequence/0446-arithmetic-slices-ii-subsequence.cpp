class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int len = nums.size();
        long res = 0;
        long long count;
        vector<unordered_map<long,long>> mp(nums.size());
        for(int i=1;i<len;i++){
            for(int j=0;j<i;j++){
                long long diff = (long)nums[i] - (long)nums[j];
                count = mp[j][diff];
                mp[i][diff] += count+1;
                res += count;  
            }
        }
        return res;
    }
};