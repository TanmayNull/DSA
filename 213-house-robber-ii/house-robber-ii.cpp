class Solution {
public:
 int chori(vector<int>&nums,int ind,vector<int>&dp){
        if(ind==0)
        return nums[ind];
        if(ind<0)
        return 0;
        if(dp[ind]!=-1)
        return dp[ind];
        int pick = nums[ind]+chori(nums,ind-2,dp);
        int np = 0+chori(nums,ind-1,dp);
        return dp[ind]=max(pick,np);
    } 
    int rob(vector<int>& nums) {
         int n= nums.size();
        vector<int>temp1,temp2;
        if(n==1)
        return nums[0];

     

        for(int i=0;i<n;i++){
            if(i!=0) temp1.push_back(nums[i]);
            if(i!=n-1) temp2.push_back(nums[i]);
        }
           vector<int> dp1(temp1.size(), -1);
        vector<int> dp2(temp2.size(), -1);
        return max(chori(temp1,temp1.size()-1,dp1),chori(temp2,temp2.size()-1,dp2));
    }
};