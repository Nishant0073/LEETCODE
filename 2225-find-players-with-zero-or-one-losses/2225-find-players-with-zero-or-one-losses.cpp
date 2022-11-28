class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        map<int,int> win;
        map<int,int> lost;
        for(auto it:matches)
        {
            win[it[0]]++;
            lost[it[1]]++;
        }
       vector<vector<int>> v(2);
        for(auto it:win)
        {
           // cout<<it.second<<" ";
            if(lost.find(it.first)==lost.end())
            {
                v[0].push_back(it.first);
            }
        }
   
        for(auto it:lost)
        {
            if(it.second==1)
            {
                v[1].push_back(it.first);
            }
        }
        
        sort(v[0].begin(),v[0].end());
        sort(v[1].begin(),v[1].end());
        
        return v;
    }
};