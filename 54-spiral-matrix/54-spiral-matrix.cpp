class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int r = mat.size();
        int c = mat[0].size();
        int i=0,j=0;
        int p=0;
        int tot = r*c;
        vector<int> v;
        while(i<r && j<c)
        {
           
           while(j<c && i<r)
               v.push_back(mat[i][j++]);
            if(v.size()==tot)
                break;
            j--;
            i++;
            while(i<r && j<c)
                v.push_back(mat[i++][j]);
            if(v.size()==tot)
                break;
            i--;
            j--;
            while(j>=p)
                v.push_back(mat[i][j--]);
             if(v.size()==tot)
                break;
            j++;
            i--;
            while(i>p)
                v.push_back(mat[i--][j]);
             if(v.size()==tot)
                break;
           
            p++;
            i++;
            j++;
           
            c--,r--;
        }
        return v;
    }
};