class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(auto it:asteroids)
        {
            bool flag = true;
            while(!st.empty() && it<0 && st.top()>0)
            {
                if(-it>st.top())
                    st.pop();
                else if(-it<st.top()){
                    flag = false;
                    break;
                }
                else
                {
                    flag = false;
                    st.pop();
                    break;
                }
            }
            if(flag)
            {
                st.push(it);
            }
        }
        vector<int> v;
        while(!st.empty())
        {
            v.push_back(st.top());
            st.pop();
        }
        reverse(v.begin(),v.end());
        return v;
    }
};