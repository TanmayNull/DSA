class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int n1=landStartTime.size();
        int n2=landDuration.size();
        int n3=waterStartTime.size();
        int n4=waterDuration.size();
        int ans=INT_MAX;
       for(int i=0;i<n1;i++){
        int landFinish=landStartTime[i]+landDuration[i];
        for(int j=0;j<n3;j++){
             int waterFinish =max(landFinish, waterStartTime[j])+ waterDuration[j];
            ans = min(ans, waterFinish);
        }
       }
        for(int i=0;i<n3;i++){
        int waterFinish=waterStartTime[i]+waterDuration[i];
        for(int j=0;j<n1;j++){
             int landFinish =max(waterFinish, landStartTime[j])+ landDuration[j];
            ans = min(ans, landFinish);
        }
       }
return ans;
    }
};