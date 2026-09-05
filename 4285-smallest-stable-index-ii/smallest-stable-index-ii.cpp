class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
         int n = nums.size();
        vector<int>rightmax(n);
        rightmax[n-1]=nums[n-1];
        for(int i=n-2;i>=0;i--)
        {
            rightmax[i]=min(nums[i],rightmax[i+1]);
        }
        int leftmax=nums[0];
        if(nums[0]-rightmax[0]<=k)
        return 0;
        for(int i=1;i<n;i++){
            leftmax=max(leftmax,nums[i]);
            if(leftmax-rightmax[i]<=k)
            return i;
        }
        return -1;
    }
};