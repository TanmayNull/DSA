class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        int ans=-1;
        if(n==k)
        return *max_element(nums.begin(),nums.end());
        if(k==1){
        for(int i=0;i<n;i++){
            if(freq[nums[i]]==1)
            ans=max(ans,nums[i]);
        }
        return ans;
        }
        if(freq[nums[0]]==1&&freq[nums[n-1]]!=1)
        return nums[0];
        if(freq[nums[n-1]]==1&&freq[nums[0]]!=1)
        return nums[n-1];
        if(freq[nums[n-1]]==1&&freq[nums[0]]==1)
        return max(nums[n-1],nums[0]);
        return -1;

    }
};