class Solution {
public:
    bool solve(string &curr,bool greater,int freq[], string &target,int n,string &ans,int ind){
        if(ind==n)
        {
            if(greater){
            ans=curr;
            return true;
            }
            return false;
        }
        for(char ch='a';ch<='z';ch++){
            if(freq[ch-'a']==0)
            continue;
            if(greater==false&&ch<target[ind])
            continue;
            curr.push_back(ch);
            freq[ch-'a']--;
            bool isGreater = greater||ch>target[ind];
            if(solve(curr,isGreater,freq,target,n,ans,ind+1))
            return true;
            curr.pop_back();
            freq[ch-'a']++;
        }
    return false;
    }
    string lexGreaterPermutation(string s, string target) {
        int n = s.length();
        int freq[26]={};
        string curr="";
        string ans="";
        for(int i=0;i<n;i++)
        freq[s[i]-'a']++;
        bool greater=false;
        bool result=solve(curr,greater,freq,target,n,ans,0);
        return ans;
    }
};