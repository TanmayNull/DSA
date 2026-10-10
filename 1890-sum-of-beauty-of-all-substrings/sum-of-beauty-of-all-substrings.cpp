class Solution {
public:
    int beautySum(string s) {
        int n = s.length();     
        int m = n*(n+1)/2;
        vector<string>sub;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                sub.push_back(s.substr(i,j-i+1));
            }
        }
    int ans=0;
        for(int i=0;i<m;i++){
             int freq[26]={0};
            for(int j=0;j<sub[i].length();j++){
                freq[sub[i][j]-'a']++;
            }
            int maxi=0;
            int mini = INT_MAX;;
            for(int k=0;k<26;k++){
                if(freq[k]>maxi&&freq[k]>0)
                maxi=freq[k];
                if(freq[k]<mini&&freq[k]>0)
                {
                    mini=freq[k];
                }
            }
            ans+=maxi-mini;
        }
        return ans;
    }
};