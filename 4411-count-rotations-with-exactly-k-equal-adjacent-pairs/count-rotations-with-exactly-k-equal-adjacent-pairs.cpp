class Solution {
public:
    int countRotations(string s, int k){
       int ans=0;
       int n = s.length();
       for(int i=0;i<n;i++){ 
        int score=0;
        for(int j=1;j<n;j++){
            if(s[j]==s[j-1])
            score++;           
       }    
       if(score==k)
       ans++;
        reverse(s.begin(),s.begin()+1);
        reverse(s.begin()+1,s.end());
        reverse(s.begin(),s.end());
       }
    return ans;
    }
};