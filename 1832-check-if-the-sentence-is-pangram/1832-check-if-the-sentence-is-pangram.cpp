class Solution {
public:
    bool checkIfPangram(string sentence) {
        bool vis[26];
        memset(vis,false,sizeof(vis));
        for(auto ch:sentence)
            vis[ch-'a'] = true;
        
       for(int i=0;i<26;i++)
       {
           if(!vis[i])
            return false;
        }
        return true;
    }
};