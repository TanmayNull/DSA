class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int i;
        for( i=0;i<n;i++){
            int xr=i^nums[i];
            if(xr!=0)
            return i;
        }
        return i;
    }
};