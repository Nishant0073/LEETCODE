class Solution {
public:
    string countAndSay(int n) {
        if(n==1)
            return "1";
        if(n==2)
            return "11";
        string s = "11";
       
        for(int i=3;i<=n;i++)
        {
            int cnt = 1;
            string ns = "";
            for(int j=1;j<s.size();j++)
            {
                if(s[j]==s[j-1])
                    cnt++;
                else
                {
                    ns+= '0'+cnt;
                    ns+= s[j-1];
                    cnt=1;
                }
            }
            ns+= '0'+cnt;
            ns+= s[s.size()-1];
            s = ns;
        }
        return s;
        
    }
};