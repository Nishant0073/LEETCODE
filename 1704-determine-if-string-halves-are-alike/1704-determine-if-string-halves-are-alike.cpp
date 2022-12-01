class Solution {
public:
    bool halvesAreAlike(string s) {
        unordered_map<char,bool> mp = {
            {'a' , true},
            {'e' , true},
            {'i' , true},
            {'o' , true},
            {'u' , true},
            {'A' , true},
            {'E' , true},
            {'I' , true},
            {'O' , true},
            {'U' , true}
        };
        
        int cnt1 = 0;
        for(int i=0;i<s.size()/2;i++)
        {
            if(mp[s[i]]==true)
                cnt1++;
        }
        
        int cnt2 = 0;
        for(int i=s.size()/2;i<s.size();i++)
        {
            if(mp[s[i]]==true)
                cnt2++;
        }
        //cout<<cnt<<" "<<s.size()<<endl;
        return (cnt1==cnt2);
    }
};