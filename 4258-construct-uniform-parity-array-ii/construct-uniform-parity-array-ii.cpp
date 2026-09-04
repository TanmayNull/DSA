class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        bool even=true;
        bool odd=true;
        int n = nums1.size();
        for(int i=0;i<n;i++)
        {
            if(nums1[i]%2!=0)
            {
                even= false;
                break;
            }
        }
        if(even)
        return true;
        int mini= *min_element(nums1.begin(),nums1.end());
        if(mini%2!=0)
        return true;
    return false;
    }
};