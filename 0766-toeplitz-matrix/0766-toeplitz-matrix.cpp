class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
       for(int j=0;j<m-1;j++)
       {
           int i=0;
           int k = j;
           while(i<n-1 && k<m-1)
           {
               if(matrix[i][k]!=matrix[i+1][k+1])
                   return false;
               i++,k++;
           }
       }
        
        for(int i=1;i<n-1;i++)
        {
            int j = 0;
            int k = i;
            while(j<m-1 && k<n-1)
            {
                if(matrix[k][j]!=matrix[k+1][j+1])
                    return false;
                j++;
                k++;
            }
        }
        return true;
        
        
    }
};