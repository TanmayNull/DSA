class Solution {
public:
    bool solve(vector<int>&nums, int ind,vector<vector<int>>&dp,int target){
        if(target==0)
        return true;
        if(ind==0)
        return nums[0]==target;
        if(dp[ind][target]!=-1)
        return dp[ind][target];
        bool notake = solve(nums,ind-1,dp,target);
        bool take = false;
        if(nums[ind]<=target)
        take=solve(nums,ind-1,dp,target-nums[ind]);
        return dp[ind][target]=notake|take;
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = accumulate(nums.begin(),nums.end(),0);
        if(sum%2!=0)
        return false;
        int target=sum/2;
        vector<vector<int>> dp(n+1, vector<int>(target+1,-1));
        return solve(nums, n-1,dp,target);
    }
};