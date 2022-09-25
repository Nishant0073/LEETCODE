class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>v;
        vector<int>t = {1};
        v.push_back(t);
        if(numRows==1)
            return v;
        t.push_back(1);
        v.push_back(t);
        if(numRows==2)
            return v;
        
        
        for(int i=3;i<=numRows;i++)
        {
            vector<int>mv;
            mv.push_back(1);
            
            
            while(mv.size()!=i-1)
            {
                int tsum = v[i-2][mv.size()]+v[i-2][mv.size()-1];
                mv.push_back(tsum);
            }
            mv.push_back(1);
            v.push_back(mv);
        }
        return v;
    }
};