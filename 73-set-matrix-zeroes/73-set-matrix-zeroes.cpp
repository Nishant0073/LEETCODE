class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==0)
                {
                    for(int k=0;k<n;k++)
                    {
                        if(mat[k][j]!=0)
                            mat[k][j] = -1234;
                    }
                    for(int k=0;k<m;k++)
                    {
                        if(mat[i][k]!=0)
                            mat[i][k] = -1234;
                    }
                }
            }
        }
        
        for(int i=0;i<n;i++)
        {
            int cnt0=0,cnt1=0;
            for(int j=0;j<m;j++)
            {
                if(mat[i][j]==-1234)
                    cnt1++;
                if(mat[i][j]==0)
                    cnt0++;
            }
            if(cnt1!=0 && cnt0!=0)
            {
                for(int j=0;j<m;j++)
                    mat[i][j] = 0;
            }
            else
            {
                for(int j=0;j<m;j++)
                {
                    if(mat[i][j]==-1234)
                        mat[i][j] = 0;
                }
            }
        }
    }

};