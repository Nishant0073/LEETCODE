class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l = 0;
        int i = 0;
        int n = nums.size();
        while(i<n)
        {
            int top = nums[i];
            while(i<n && nums[i]==top)
                i++;
            
            nums[l++] = top;
           // cout<<l<<" "<<i<<endl;
        }
        return l;
    }
};