class Solution {
public:
int sumdig(int m){
    int sum =0;
    while(m>0){
        int rem = m%10;
        sum+=rem;
        m/=10;
    }
    return sum;
}
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(sumdig(nums[i])==i)
            return i;
        }
        return -1;
    }
};