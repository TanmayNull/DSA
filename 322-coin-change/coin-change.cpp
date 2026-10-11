class Solution {
public:
int solve(vector<int>&dp,int amount,vector<int>&coins)
{
    if(amount==0)
    return 0;
    if(dp[amount]!=-1)
    return dp[amount];
    int mincount=INT_MAX;
    for(int i=0;i<coins.size();i++){
        if(coins[i]<=amount){
        int result=solve(dp,amount-coins[i],coins);
         if (result != INT_MAX) {
                    mincount = min(mincount, 1+result);
                }
        }
    }
    return dp[amount]=mincount;
}
    int coinChange(vector<int>& coins, int amount) {
        vector<int>dp(amount+1,-1);
        return solve(dp,amount,coins)==INT_MAX?-1:solve(dp,amount,coins);
    }
};