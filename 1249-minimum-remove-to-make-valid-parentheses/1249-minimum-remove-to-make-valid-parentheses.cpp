class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<pair<char,int>> st;
        map<int,char>mp;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push({'(',i});
            }
            else if(s[i]==')')
            {
               
                if(st.empty())
                {
                    continue;
                }
                else
                {
               
                    auto it = st.top();
                    st.pop();
                    mp[it.second] = it.first;
                    mp[i] = s[i];
                }
            }
        }
        string ans = "";
        for(int i=0;i<s.size();i++)
        { 
            if(s[i]!='(' && s[i]!=')')
                ans+=s[i];
            else
            {
                
                if(mp[i])
                    ans+=mp[i];
            }
  
        }
        return ans;
    }
};