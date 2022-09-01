class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.size()>s2.size())
            return false;
        map<char,int>mp1;
        map<char,int>mp2;
        for(int i=0;i<s1.size();i++)
            mp1[s1[i]]++;
        int i=0;
        for(i=0;i<s1.size();i++)
            mp2[s2[i]]++;
        
        if(mp1==mp2)
            return true;
        int start = 0,end = i;
        while(end<s2.size())
        {
            mp2[s2[end]]++;
            if(mp2[s2[start]]>1)
                mp2[s2[start]]--;
            else
                mp2.erase(s2[start]);
            if(mp1==mp2)
                return true;
            start++,end++;
        }
        return false;
    }
};