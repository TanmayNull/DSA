class Solution {
public:
    bool checkDivisibility(int n) {
        int no=n;
        int pro=1;
        int sum=0;
        while(no!=0){
            int rem = no%10;
            sum+=rem;
            pro*=rem;
            no/=10;
        }
        return n%(sum+pro)==0;
    }
};