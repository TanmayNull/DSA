class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int i=0;
        int j=0;
        int n = nums.size();
        int max_len=-1;
        int total_sum=accumulate(nums.begin(),nums.end(),0);
        int sum=0;
        if (total_sum-x < 0) return -1;
        if (total_sum-x == 0) return n;
        while(j<n){
            sum+=nums[j];
            while(sum>total_sum-x&&i<=j)
            {
                sum-=nums[i];
                i++;
            }
            if(sum==total_sum-x)
            {
                max_len=max(max_len,j-i+1);
            }
            j++;
        }
        return max_len==-1?-1:n-max_len;
    }
};