class Solution {
public:
    void halfRotate(vector<int> &nums,int l,int r)
    {
        while(l<r)
        {
            swap(nums[l],nums[r]);
            l = l+1;
            r = r-1;
        }
    }
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        reverse(nums.begin(),nums.end());
        halfRotate(nums,0,k-1);
        halfRotate(nums,k,n-1);
    }
};