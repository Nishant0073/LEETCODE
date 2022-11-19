
class Solution {
public:
    int getAngle(vector<int> A,vector<int> B,vector<int> C){
        return (((B[0]-A[0])*(C[1]-A[1])) - ((B[1]-A[1])*(C[0]-A[0])));
    }
    vector<vector<int>> outerTrees(vector<vector<int>>& trees) {
        if(trees.size()<=3)
            return trees;


        sort(trees.begin(),trees.end());


        vector<vector<int>> upp;

        upp.push_back(trees[0]);
        upp.push_back(trees[1]);


        for(int i=2;i<trees.size();i++){
            int us = upp.size();
            while(upp.size()>=2 && getAngle(upp[us-2],upp[us-1],trees[i])>0){
                upp.pop_back();
                us--;
            }

            upp.push_back(trees[i]);
        }

  
        vector<vector<int>> low;


        low.push_back(trees[trees.size()-1]);
        low.push_back(trees[trees.size()-2]);

        for(int i=trees.size()-3;i>=0;--i)
        {
            int ls = low.size();
            while(low.size()>=2 && getAngle(low[ls-2],low[ls-1],trees[i])>0){
                low.pop_back();
                ls--;
            }
            low.push_back(trees[i]);
        }
        upp.insert(upp.end(),low.begin(),low.end());
        sort(upp.begin(),upp.end());

        upp.erase(unique(upp.begin(),upp.end()),upp.end());

        return upp;
    }
};
