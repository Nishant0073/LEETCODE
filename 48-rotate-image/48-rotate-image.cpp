class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int mid = n/2;
        bool isOdd = n%2? true:false;
        vector<vector<int>>mat(n,vector<int>(n,0));
        int i=0,j=0;
        int cnt = 0;
        while(1)
        {
            if((mid+1==n && isOdd)) 
            {
                mat[mid][mid] = matrix[mid][mid];
                break;
            }
            else if(mid==n && !isOdd)
                break;  
            int k = n-1;
            int kk = n-cnt-1;
            int nI = i,nJ = j;
            cnt++;
            //if(cnt==2)
            //    cout<<nI<<" "<<nJ<<" "<<n<<" "<<i<<" "<<j<<" "<<k<<endl;
            while(j<n)
            {
                if(j+kk<n)
                {
                    mat[i][j+kk] = matrix[i][j];
                   // cout<<i<<" "<<j+k<<endl;
                }
                else
                {
                    int t = (j+kk)-(n-1);
                    mat[i+t][k] = matrix[i][j];
                    //cout<<i<<" "<<j<<" "<<i+t<<" "<<kk<<" "<<mat[2][2]<<endl;
                }
                j++;
            }
            j--;
            i++;
            while(i<n)
            {
                if(i+kk<n)
                {
                    mat[i+kk][j] = matrix[i][j];
                }
                else
                {
                    int t = (i+kk)-(n-1);
                    mat[k][j-t] = matrix[i][j];
                   //cout<<k<<" "<<j-t<<endl;
                }
                i++;
            }
            i--;
            j--;
            while(j>=nJ)
            {
                if(j-kk>=nJ)
                    mat[i][j-kk] = matrix[i][j];
                else
                {
                    int t = abs(j-k);
                    mat[i-t][nJ] = matrix[i][j];
                  //  cout<<i-t<<" "<<nJ<<endl;
                }
                j--;
            }
            j++;
            i--;
            while(i>nI)
            {
                if(i-kk>=nI)
                    mat[i][i-kk] = matrix[i][j];
                else
                {
                    int t = abs(i-k);
                    mat[nI][j+t] = matrix[i][j];
                    //cout<<i<<" "<<j<<" "<<j-t<<endl;
                }
                i--;
            }
            i++;
            j++;
            n-=1;
        }
        
      //  cout<<cnt<<endl;
        matrix = mat;
        
    }
};