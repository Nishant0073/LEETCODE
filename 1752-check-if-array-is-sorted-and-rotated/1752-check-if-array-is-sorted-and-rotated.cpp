class Solution {
public:
    bool check(vector<int>& nums) {
        int mInd = 0;
        int n = nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[mInd]>nums[i])
            {
                mInd = i;
            }
        }
        if(nums[mInd]==nums[nums.size()-1])
        {
            int j=n-1;
            while(j>=mInd && nums[mInd]==nums[j])
                j--;
            j++;
            mInd = j;
        }
        for(int i=0;i<n-1;i++)
        {
          //  cout<<(i+mInd)%n<<" "<<(i+mInd+1)%n<<endl;
            if(nums[(i+mInd)%n]>nums[(i+mInd+1)%n])
                return false;
        }
        return true;
    }
};