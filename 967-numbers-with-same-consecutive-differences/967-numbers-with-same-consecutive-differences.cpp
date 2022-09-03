class Solution {
public:
    void dfs(int curr,int len,vector<int> &v,int n,int k)
    {
        if(len==n)
        {
            v.push_back(curr);
            return;
        }
        for(int i=0;i<10;i++)
        {
            int top = curr%10;
            if(abs(top-i)==k)
                dfs( curr*10+i,len+1,v,n,k);
        }
    }
    vector<int> numsSameConsecDiff(int n, int k) {
        vector<int> v;
        if(n==1)
            v.push_back(0);
        for(int i=1;i<10;i++)
        {
            dfs( i,1,v,n,k);
        }
        return v;
            
    }
};