class Solution {
public:
    int minimum(vector<int>& cost, int ind,vector<int>&dp){
     
        if(ind==0||ind==1)
        return 0;
        int rs=INT_MAX;
        if(dp[ind]!=-1)
        return dp[ind];
        int ls=minimum(cost,ind-1,dp)+cost[ind-1];
         rs=minimum(cost,ind-2,dp)+cost[ind-2];
        return dp[ind]=min(ls,rs);

    }
    int minCostClimbingStairs(vector<int>& cost) {
        vector<int>dp(cost.size()+1,-1);
        return minimum(cost,cost.size(),dp);
    }
};