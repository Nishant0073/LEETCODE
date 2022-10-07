class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string pref = "";
        for(auto it:words)
        {
            pref+=it;
            if(pref==s)
                return true;
        }
        return false;
    }
};