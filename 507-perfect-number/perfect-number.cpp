class Solution {
public:
    bool checkPerfectNumber(int num) {
        int sum=0;
        for(int i=1;i*i<num;i++){
            if(num%i==0){
                if(num/i!=num){
                    sum= sum + i +(num/i);
                }
                else{
                    sum+=i;
                }
                
            }
        } 
        if(sum==num)
        return true;
        return false;
    }
};