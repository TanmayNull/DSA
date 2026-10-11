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
        int minLen=INT_MAX;
        for(int i= max(left, 2);i<=right;i++){
            if(isPrime[i])
            {
            int j=i+1;
            
                while(j<=right&&isPrime[j]!=true)
                {
                    j++;
                }
            if(j<=right&&j-i<minLen)
            {
                ans={i,j};
                minLen=j-i;
            }
            }
        }
        if (ans.empty()) return {-1, -1};
        return ans;
    }
};