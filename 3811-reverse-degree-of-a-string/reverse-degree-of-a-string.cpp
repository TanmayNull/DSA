class Solution {
public:
    int reverseDegree(string s) {
        vector<int>alpha(26);
        int num=26;
        for(int i=0;i<26;i++){
            alpha[i]=num--;
        }
        int ans=0;
        for(int i=0;i<s.length();i++){
            ans+=(i+1)*alpha[s[i]-'a'];
        }
        return ans;
    }
};