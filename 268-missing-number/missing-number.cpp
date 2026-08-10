class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int xr1=0;
        int xr2=0;
        int i;
        for( i=0;i<n;i++){
            xr1=xr1^nums[i];
           xr2=xr2^i;
        }
        xr2=xr2^i;
        return xr1^xr2;
    }
};