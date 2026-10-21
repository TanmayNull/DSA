class Solution {
public:
    int lastStoneWeightII(vector<int>& stones) {
        int total_sum=accumulate(stones.begin(),stones.end(),0);
        int k= total_sum;
        int n = stones.size();
        vector<vector<bool>>dp(n,vector<bool>(k+1,0));
        for(int i=0;i<n;i++){
            dp[i][0]=true;
        }
        dp[0][stones[0]]=true;
        for(int ind =1;ind<n;ind++){
            for(int target=1;target<=k;target++){
                bool notTake=dp[ind-1][target];
                bool take=false;
                if(stones[ind]<=target)
                take=dp[ind-1][target-stones[ind]];
                dp[ind][target]=take|notTake;
            }
        }
        int mini=1e9;
        for(int s1=0;s1<=k/2;s1++){
            if(dp[n-1][s1]==true)
            mini=min(mini,abs((total_sum-s1)-s1));
        }
        return mini;
    }
};