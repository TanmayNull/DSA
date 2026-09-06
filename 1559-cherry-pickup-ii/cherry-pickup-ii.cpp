class Solution {
public:
   /* int path(vector<vector<int>>& grid,int i,int j1,int j2,int m,int n,vector<vector<vector<int>>>&dp){
        if(j1<0||j2>n||j1>n||j2<0)
        {
            return -1e8;
        }
        if(i==m){
            if(j1==j2)
            return grid[i][j1];
            else
            return grid[i][j1]+grid[i][j2];
        }
        if(dp[i][j1][j2]!=-1)
        return dp[i][j1][j2];
        int maxi=0;
        for(int k1=-1;k1<=1;k1++){
            for(int k2=-1;k2<=1;k2++){
                int value=0;
                if(j1==j2)
               value=grid[i][j1];
                else
                value=grid[i][j1]+grid[i][j2];
                value+=path(grid,i+1,j1+k1,j2+k2,m,n,dp);
                 maxi= max(maxi,value);
            }
        }
        return dp[i][j1][j2]=maxi;
    }*/
    int cherryPickup(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<vector<int>>>dp(m,vector<vector<int>>(n,vector<int>(n,0)));
        for(int j1=0;j1<n;j1++){
            for(int j2=0;j2<n;j2++){
                if(j1==j2)
                dp[m-1][j1][j2]=grid[m-1][j2];
                else
                dp[m-1][j1][j2]=grid[m-1][j1]+grid[m-1][j2];
            }
        }
        
        for(int i=m-2;i>=0;i--){
            for(int j1=0;j1<n;j1++){
                for(int j2=0;j2<n;j2++){  
                    int maxi=-1e8;            
                    for(int k1=-1;k1<=1;k1++){
                        for(int k2=-1;k2<=1;k2++){
                        int value=0;
                        if(j1==j2)
                        value=grid[i][j1];
                        else
                        value=grid[i][j1]+grid[i][j2];
                        if(j1+k1<n&&j2+k2<n&&j1+k1>=0&&j2+k2>=0)
                        value+=dp[i+1][j1+k1][j2+k2];
                        else value+=-1e8;
                        maxi= max(maxi,value);
                        }
                    }
                    dp[i][j1][j2]=maxi;
                }
            }
        }
        return dp[0][0][n-1];
    }
};