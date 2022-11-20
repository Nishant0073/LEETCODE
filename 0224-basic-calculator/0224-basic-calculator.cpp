class Solution {
public:
    int calculate(string s) {
        int sum  = 0;
        int sign = 1;
        int n = s.size();
        stack<int> st;
        for(int i=0;i<n;i++)
        {
            if(s[i]>='0' && s[i]<='9')
            {
                int val = 0;
                while(i<n && (s[i]>='0' && s[i]<='9'))
                {
                    val  = (val*10) + (s[i]-'0');
                    i++;
                }
                sum= sum + (val*sign);
                i--;
            }
            else if(s[i]=='+')
                sign = 1;
            else if(s[i]=='-')
                sign = -1;
            else  if(s[i]=='(')
            {
                st.push(sum);
                st.push(sign);
                sum = 0;
                sign = 1;
            }
            else if(s[i]==')')
            {
                 sum=st.top()*sum;
                st.pop();
                sum+=st.top();
                st.pop();
            }
        }
        return sum;
    }
};