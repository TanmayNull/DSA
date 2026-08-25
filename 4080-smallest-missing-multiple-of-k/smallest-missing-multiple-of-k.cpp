class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int maxi =0;
        int n = nums.size();
        unordered_map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
            if(nums[i]%k==0)
            maxi=max(maxi,nums[i]/k);
        }
        for(int i=1;i<=maxi;i++){
            if(mpp[k*i]==0)
            return k*i;
        }
        return (maxi+1)*k;
    }
};