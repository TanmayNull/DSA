class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int m = triangle.size();
        vector<vector<int>>dp(m,vector<int>(m,0));
        for(int i=0;i<m;i++)
        dp[m-1][i]=triangle[m-1][i];
        for(int i=m-2;i>=0;i--){
            for(int j=i;j>=0;j--){
                if(i==m)
                dp[i][j]= triangle[i][j];
                 int left=triangle[i][j]+dp[i+1][j];
                 int right=triangle[i][j]+dp[i+1][j+1];
                 dp[i][j]=min(left,right);
            }
        }
        return dp[0][0];
    }
};