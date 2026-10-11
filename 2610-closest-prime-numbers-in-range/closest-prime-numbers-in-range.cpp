class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<bool>isPrime(right+1,true);
        isPrime[0]=isPrime[1]=false;
        for(int i=2;i*i<=right;i++){
            if(isPrime[i])
            {
                for(int j=i*i;j<=right;j+=i){
                    isPrime[j]=false;
                }
            }
        }
        vector<int>ans;
        int prev=-1;
        int minLen=INT_MAX;
        for(int i= max(left, 2);i<=right;i++){
            if(isPrime[i])
            {
            if(prev!=-1&&i-prev<minLen)
            {
                ans={prev,i};
                minLen=i-prev;
                 if (minLen == 1) break;
            }
            prev=i;
            }
        }
        if (ans.empty()) return {-1, -1};
        return ans;
    }
};