class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        long long sum = 0;
         long long ans = INT_MAX;
        int n = nums.size();
        for(int i=0;i<n;i++)
            sum+=nums[i];
        int ind = -1;
         long long tsum = 0;
        for(int i=0;i<n;i++)
        {
            tsum+=nums[i];
             long long left = tsum;
             long long right = sum-tsum;
            
             long long l = 0,r=0;
            if(left!=0)
                l = (left/(i+1));
            if(right!=0)
                r = (right/(n-i-1));
        
             long long def = abs(l-r);
            if(def<ans)
            {
                ans = def;
                ind = i;
            }
                
          //  cout<<l<<" "<<r<<" "<<ans<<endl;
            
        }
        
        return ind;
    }
};