class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int i=0;
        int j=0;
        int maxLen=0;
        int len=0;
       for(int i=0;i<n;i++){
        len+=nums[i];
        if(nums[i]==0||i==n-1)
        {
            maxLen=max(len,maxLen);
            len=0;
        }
       }
        return maxLen;
    }
};