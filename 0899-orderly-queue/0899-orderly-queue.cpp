

class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k==1)
        {
            string ans = s;
            
            int n = s.size();
            s = s+s;
            for(int i=1;i<n;i++)
            {
                string tmp = s.substr(i,n);
                if(tmp<ans)
                    ans = tmp;
            }
            return ans;
        }
        sort(s.begin(),s.end());
        return s;
    }
};