class Solution {
public:
    int threeSumClosest(vector<int>& nums, int tar) {
        int n = nums.size();
        
        int cnear = nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());
       
        for(int i=0;i<n;i++)
        {
            int j=i+1,k=n-1;
            while(j<k)
            {
                int tsum = nums[i]+nums[j]+nums[k];
                int deff = abs(tar-tsum);
                if(deff<abs(tar-cnear))
                    cnear = tsum;
                if(tsum<=tar)
                    j++;
                else
                    k--;
               
                
            }
        }
        return cnear;
    }
};