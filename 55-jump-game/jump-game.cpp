class Solution {
public:
    bool solve(vector<int>& nums,int ind,int n,vector<int>&dp)
    {
        if(ind>=n-1)
        return true;
        if(dp[ind]!=-1)
        return dp[ind];
        for(int i=1;i<=nums[ind];i++){
           bool ans= solve(nums,ind+i,n,dp);
           if(ans)
           return dp[ind]=1;
        }
        return dp[ind]=0;
    }
    bool canJump(vector<int>& nums) {
        int n =nums.size();
        vector<int>dp(n+1,-1);
        return solve(nums,0,n,dp);
    }
};