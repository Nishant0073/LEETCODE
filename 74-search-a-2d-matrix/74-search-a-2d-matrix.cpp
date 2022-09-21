class Solution {
public:
    int findRow(vector<vector<int>>& mat,int k,int n,int m)
    {
        int l = 0,r = m-1;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(mat[mid][0]<=k && mat[mid][n-1]>=k)
                return mid;
            if(mat[mid][0]>k)
                r = mid-1;
            else
                l = mid+1;
        }
        return -1;
    }
    int findCol(vector<vector<int>>& mat,int k,int n,int m)
    {
        int l = 0,r = n-1;
        while(l<=r)
        {
            int mid = (l+r)/2;
            if(mat[m][mid]==k)
                return mid;
            if(mat[m][mid]>k)
                r = mid-1;
            else
                l = mid+1;
        }
        return -1;
    }
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
        int m = mat.size();
        int n = mat[0].size();
        int row = findRow(mat,tar,n,m);
        if(row==-1)
            return false;
        int col = findCol(mat,tar,n,row);
        if(col==-1)
            return false;
        return true;
    }
};