class Solution {
public:
    void halfRotate(vector<int> &nums,int l,int r)
    {
        while(l<r)
        {
            swap(nums[l++],nums[r--]);
        }
    }
    void rotate(vector<int>& nums, int k) {
          k = k%nums.size();
        if(nums.size()==1)
            return ;
        reverse(nums.begin(),nums.end());
        halfRotate(nums,0,k-1);
        halfRotate(nums,k,nums.size()-1);
    }
};