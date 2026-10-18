class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int m=grid.size();
        int n = grid[0].size();
        int r,c=-1;
    int i=0;
    int j=0;
        vector<vector<int>> visited(m, vector<int>(n, 0));
        while(i>=0&&i<m&&j>=0&&j<n&&(visited[i][j]!=1))
        {
            visited[i][j]=1;
            r=i;
            c=j;
            if(grid[i][j]=='L')
            j--;
            else if(grid[i][j]=='R')
            j++;
            else if(grid[i][j]=='U')
            i--;
            else
            i++;
        }
        return {r,c};
    }
};