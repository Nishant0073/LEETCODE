class Solution {
public:
    
    
    vector<string> topKFrequent(vector<string>& words, int k) {
       
        unordered_map<string,int> mp;
        priority_queue<pair<int,string>> pq;
        for(auto it:words)
            mp[it]++;
       
        for(auto it:mp)
        { 
            pq.push(make_pair(it.second,it.first));
        }
        
        vector<string> ans;
        map<int,vector<string>,greater<int>>tm;
        while(!pq.empty())
        {
            auto it = pq.top();
            pq.pop();
            tm[it.first].push_back(it.second);
        }
        for(auto it:tm)
        {
            sort(it.second.begin(),it.second.end());
            for(auto i:it.second)
            {
                if(k)
                {
                  ans.push_back(i);
                }
                else
                    break;
                k--;
            }
        }
 
        return ans;
    }
    
};