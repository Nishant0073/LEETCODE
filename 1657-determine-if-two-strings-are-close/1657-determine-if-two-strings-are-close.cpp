class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
        
        for(auto it:word1)
            mp1[it]++;
        
        for(auto it:word2)
            mp2[it]++;
        
        vector<int> v1;
        vector<int> v2;
        
        vector<char> c1;
        vector<char> c2;
        
        for(auto it:mp1)
        {
            v1.push_back(it.second);
            c1.push_back(it.first);
        }
        
        for(auto it:mp2)
        {
            v2.push_back(it.second);
            c2.push_back(it.first);
        }
        
        sort(v1.begin(),v1.end());
        sort(v2.begin(),v2.end());
        
        sort(c1.begin(),c1.end());
        sort(c2.begin(),c2.end());
        
        return (v1==v2 && c1==c2);
        
        
    }
};