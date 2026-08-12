class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n = nums.size();
        int i=0;
        int j=0;
        int maxLen=0;
        if(n==1)
        return n;
        unordered_map<int,int>mpp;
        while(j<n){
            mpp[nums[j]]++;
        if(j<n&&mpp[nums[j]]>k){
                while(j<n&&mpp[nums[j]]>k)
                {             
                mpp[nums[i]]--;
                i++;
                }
                
            }
            maxLen=max(j-i+1,maxLen);
                j++;

        }
        return maxLen;
    }
};