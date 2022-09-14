class Solution {
public:
    int maxProfit(vector<int>& pr) {
        int prf = 0;
        int buy = pr[0],sell = pr[0];
        for(int i=0;i<pr.size();i++)
        {
            if(pr[i]<buy)
            {
                buy = pr[i];
                sell = pr[i];
            }
            sell = max(sell,pr[i]);
            prf = max(prf,(sell-buy));
        }
        return prf;
        
        
    }
};