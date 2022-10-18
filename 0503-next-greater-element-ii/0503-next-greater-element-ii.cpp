class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int mxInd = 0;
        int n = nums.size();
        vector<int> ans(n,-1);
        for(int i=0;i<n;i++)
        {
            if(nums[i]>nums[mxInd])
                mxInd = i;
        }
        stack<int> st;
        for(int i=0;i<n;i++)
        {
            int j= (mxInd-i+n)%n;
             
            while(!st.empty() && st.top()<=nums[j])
                st.pop();
            if(!st.empty())
                ans[j] = st.top();
            else
                st.push(nums[mxInd]);
            st.push(nums[j]);
        }
        return ans;
    }
};