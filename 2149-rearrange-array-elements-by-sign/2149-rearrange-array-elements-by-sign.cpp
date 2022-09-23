class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int i=0;
        int j=0;
        int k=0;
        int n = nums.size();
        vector<int> v(n);
        int cnt= 1;
        while(k<n)
        {
            if(k%2==0)
            {
                while(i<n && nums[i]<0)
                    i=i+1;
              
                v[k] = nums[i];
                i=i+1;
            }
            else
            {
               while(j<n && nums[j]>=0)
                    j=j+1;
                v[k] = nums[j];
                j=j+1;
            }
            k++;
        }
      
              
        return v;
    }
};