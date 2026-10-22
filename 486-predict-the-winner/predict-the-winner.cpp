class Solution {
public:
    int solve(vector<int>&nums,vector<vector<int>>&dp,int i, int j)
    {
        if(i==j)
        return nums[j];
        if(dp[i][j]!=-1)
        dp[i][j];
        int left=nums[i]-solve(nums,dp,i+1,j);
        int right=nums[j]-solve(nums,dp,i,j-1);
        return dp[i][j]=max(left,right);
    }
    bool predictTheWinner(vector<int>& nums) {
        int Player1=0;
        int Player2=0;
        int n= nums.size();
        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
        return solve(nums,dp,0,n-1)>=0;
    }
};