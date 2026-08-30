class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int mini=nums[0];
        int maxi=nums[0];
        int maxind=0;
        int minind=0;
        for(int i=0;i<n;i++){
            if(mini>nums[i])
            {
                minind=i;
                mini=nums[i];
            }
            if(maxi<nums[i])
            {
                maxind=i;
                maxi=nums[i];
            }
        }
        int right=max(n-maxind,n-minind);
        int left=max(maxind,minind)+1;
        int mixed = min(minind + 1 + n - maxind,maxind + 1 + n - minind);
    return min({left, right, mixed});
    }
};