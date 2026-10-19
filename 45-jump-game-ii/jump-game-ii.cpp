class Solution {
public:
    int solve(vector<int>& nums,int ind,int n,vector<int>&dp)
    {
        if(ind>=n-1)
        return 0;
        if(dp[ind]!=-1)
        return dp[ind];
        int mini = INT_MAX;
        
        for(int i=1;i<=nums[ind];i++){
            if(ind+i<n){
           int jumping =solve(nums,i+ind,n,dp);
           if(jumping!=INT_MAX)
           mini=min(mini,1+jumping);
            }
        }
        return dp[ind]=mini;
    }
    int jump(vector<int>& nums) {
        int n =nums.size();
        vector<int>dp(n+1,-1);
        return solve(nums,0,n,dp);
    }
};