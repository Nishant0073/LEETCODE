class Solution {
public:
    int maximum69Number (int num) {
        
        int ans = num;
        string s = to_string(num);
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='6')
            {
                s[i]='9';
                int tmp = stoi(s);
                ans = max(tmp,ans);
                s[i]='6';
            }
        }
        return ans;
        
        
    }
};