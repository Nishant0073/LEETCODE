class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> v;
        if(p.size()>s.size())
            return v;
        map<char,int>mp1;
        map<char,int>mp2;
        int i;
        for(  i=0;i<p.size();i++)
            mp1[p[i]]++;
        for(  i=0;i<p.size();i++)
            mp2[s[i]]++;
        if(mp1==mp2)
            v.push_back(0);
        int start = 0,end = i;
        while(end<s.size())
        {
           // cout<<start<<" "<<end;
            mp2[s[end]]++;
            if(mp2[s[start]]>1)
                mp2[s[start]]--;
            else
                mp2.erase(s[start]);
            // for(auto it:mp1)
            //     cout<<it.first<<" "<<it.second<<endl;
            // cout<<endl;
            //  for(auto it:mp2)
            //     cout<<it.first<<" "<<it.second<<endl;
            if(mp1==mp2)
                v.push_back(end+1-p.size());
            start++,end++;
        }
        return v;
    }
};