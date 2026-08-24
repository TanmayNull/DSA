class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>pos(n/2);
        vector<int>neg(n/2);
        int k=0;
        int l=0;
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            if(nums[i]<0)
            neg[l++]=nums[i];
            else if(nums[i]>0)
            pos[k++]=nums[i];
        }
        k=0;
        l=0;
        for(int i=0;i<n;i++){
            if(i%2==0)
            ans[i]=pos[k++];
            else
            ans[i]=neg[l++];
        }
        return ans;
    }
};