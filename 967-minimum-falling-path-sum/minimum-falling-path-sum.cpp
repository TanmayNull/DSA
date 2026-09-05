class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n =matrix.size();
        vector<int>prev(n,0),curr(n,0);
        for(int j=0;j<n;j++)
        prev[j]=matrix[0][j];
        int mini=1e9;
        for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
           int up = matrix[i][j]+prev[j];  
    int left=matrix[i][j];
     if(j-1>=0)
     left+=prev[j-1];
    else
    left+=1e9;
    int right=matrix[i][j];
    if(j+1<n)
    right+=prev[j+1];
    else
    right+=1e9;
    curr[j] = min(up,min(left,right));
        }
        prev=curr;
        }
        for(int j=0;j<n;j++)
       mini= min(mini,prev[j]);
       return mini;
    }
};