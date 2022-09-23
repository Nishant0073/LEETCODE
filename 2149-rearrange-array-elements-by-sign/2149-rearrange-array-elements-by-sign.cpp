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
           // cout<<cnt++<<" "<<pos<<endl;
            if(pos && i<n)
            {
                while(i<n && nums[i]<0)
                    i++;
                v.push_back(nums[i]);
                i++;
            }
            if(!pos || (pos && i>=n))
            {
               while(j<n && nums[j]>=0)
                    j++;
                v.push_back(nums[j]);
                j++;
            }
            pos = !pos;
        }
      
              
        return v;
    }
};