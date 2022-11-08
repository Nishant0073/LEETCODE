class Solution {
public:
    string makeGood(string s) {
        
        string str;
        str.push_back(s[0]);
        for(int i=1;i<s.size();i++)
        {
            if(str.size()!=0)
            {
                if(((((str[str.size()-1])-'a')+'A')==s[i]) || (s[i]==((((str[str.size()-1])-'A')+'a'))))
                {
                    str.pop_back();
                }
                else
                {
                    str.push_back(s[i]);
                }
            }
            else
                str.push_back(s[i]);
        }
        return str;
        
    }
};