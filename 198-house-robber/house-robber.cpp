class Solution {
public:
int func(vector<int>& nums,int ind,vector<int>&dp)
{
    if(ind==0)
    return nums[ind];
    if(ind<0)
    return 0;
    if(dp[ind]!=-1)
    return dp[ind];
    int left = nums[ind]+func(nums,ind-2,dp);
    int right = 0+func(nums,ind-1,dp);
    return dp[ind]= max(left,right);
}
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1,-1);
        return func(nums,n-1,dp);
    }
};