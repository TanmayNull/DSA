class Solution {
public:
int solve(vector<int>&dp,int n){
    if(n==0)
    return 0;
    if(dp[n]!=-1)
    return dp[n];
    int mincount=INT_MAX;
    for(int i=1;i*i<=n;i++){
       int result=1+solve(dp,n-i*i);
       mincount=min(mincount,result);
    }
    return dp[n]=mincount;
}
    int numSquares(int n) {
         vector<int>dp(n+1,-1);
    return solve(dp,n);
    }
};