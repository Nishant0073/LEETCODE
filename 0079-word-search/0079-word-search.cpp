class Solution {
public:
vector<int> dx = {-1, 0, 1, 0} , dy = {0, 1, 0, -1};
    bool dfs(vector<vector<char>>& grid, int i, int j, int n, int m, string& word, int pos)
    {
        if(pos >= word.size())    return true;   
        if(i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == '#' || grid[i][j] != word[pos])    return false;
        
        char val = grid[i][j];
        grid[i][j] = '#';

        for(int k = 0; k < 4; k++)
        {
            int new_i = i + dx[k] , new_j = j + dy[k];
            if(dfs(grid, new_i, new_j, n, m, word, pos + 1))    return true;
        }
        grid[i][j] = val;
        return false;
    }
    bool exist(vector<vector<char>>& grid, string word) {
        int n = grid.size() ,  m = grid[0].size();
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(dfs(grid, i, j, n, m, word, 0))    return true;
            }
        }
        return false;
    }
};
