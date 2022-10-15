class Solution {
public:
    void getComb(int i,vector<int> cand,int k,vector<int> ans,vector<vector<int>> &v)
    {
        if(k==0)
        {
            v.push_back(ans);
            return ;
        }
        if(i<0 || k<0)
            return ;
        ans.push_back(cand[i]);
        getComb(i,cand,k-cand[i],ans,v);
        ans.pop_back();
        getComb(i-1,cand,k,ans,v);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> v;
        vector<int> ans;
        int n = candidates.size()-1;
        getComb(n,candidates,target,ans,v);
        return v;
    }
};