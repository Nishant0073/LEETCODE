class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int iv = 0 , jv = 0;
        int is = 0 , js = 0;
        
        string s1 = word1[0];
        string s2 = word2[0];
        
        while(iv<word1.size() && jv<word2.size())
        {
            if(is==s1.size())
            {
                iv++;
                if(iv!=word1.size())
                {
                    s1 = word1[iv];
                    is = 0;
                }
            }
            if(js==s2.size())
            {
                jv++;
                if(jv!=word2.size())
                {
                    s2 = word2[jv];
                    js = 0;
                }
            }
            if(iv==word1.size() && jv==word2.size())
                return true;
            if(iv==word1.size() || jv==word2.size())
                return false;
            if(s1[is]!=s2[js])
                return false;
            is++,js++;
        }
        return true;
        
    }
};