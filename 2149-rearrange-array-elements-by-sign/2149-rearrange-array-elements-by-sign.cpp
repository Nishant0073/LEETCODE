class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        bool pos = true;
        int i=0;
        int j=0;
 
        int n = nums.size();
        vector<int> v;
        int cnt= 1;
        while(i<n && j<n)
        {
            if(pos && i<n)
            {
                while(i<n && nums[i]<0)
                    i=i+1;
                v.push_back(nums[i]);
                i=i+1;
            }
            if(!pos || (pos && i>=n))
            {
               while(j<n && nums[j]>=0)
                    j=j+1;
                v.push_back(nums[j]);
                j=j+1;
            }
            pos = !pos;
        }
      
              
        return v;
    }
};