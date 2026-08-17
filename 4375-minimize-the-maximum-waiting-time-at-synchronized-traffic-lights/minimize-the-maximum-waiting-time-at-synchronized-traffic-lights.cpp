class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int n=arrivalTime.size();
        vector<int>wait(n);
        for(int i=0;i<n;i++){
            arrivalTime[i]=arrivalTime[i]%period;
        }
        int compare=*max_element(lights.begin(),lights.end());
        for(int i=0;i<n;i++){
                if(arrivalTime[i]<compare)
                {
                    wait[i]=0;
                }
                else{
                    wait[i]=period-arrivalTime[i];
                }
            }
    return *max_element(wait.begin(),wait.end());   
     }
};