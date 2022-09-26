class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int n = nums.size();
        vector<vector<int>>v;
        while(i<n)
        {
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                int sum = nums[i]+nums[j]+nums[k];
                if(sum==0)
                {
                    vector<int> t = {nums[i],nums[j],nums[k]};
                    v.push_back(t);
                     int tmp = nums[j];
                    while(j<k && tmp==nums[j])
                        j++;
                   
                     
                      tmp = nums[k];
                    while(j<k && tmp==nums[k])
                        k--;
                 
                }
                if(sum<0)
                {
                    
                    int tmp = nums[j];
                    while(j<k && tmp==nums[j])
                        j++;
                }
                if(sum>0)
                {
                    
                    int tmp = nums[k];
                    while(j<k && tmp==nums[k])
                        k--;
                }
            }
            int tmp = nums[i];
            while(i<n && tmp==nums[i])
                i++;
            
        }
        return v;
    }
};