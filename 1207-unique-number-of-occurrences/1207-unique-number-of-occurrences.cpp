class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> mp;
        for(auto it:arr)
        {
            mp[it]++;
        }
        map<int,int> mp1;
        for(auto it:mp)
            mp1[it.second]++;
        
        for(auto it:mp1)
        {
            if(it.second>1)
                return false;
        }
        return true;
    }
};