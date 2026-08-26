class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.length();
        int i=0;
        int j=0;
        int len=INT_MAX;
        string str="";
        int count=0;
        while(j<n){
            count+=s[j]-'0';
            if(count>k)
            {
                while(count>k){
                count-=s[i]-'0';
                i++;
                }
            }
            if(count==k){
                while(s[i]=='0')
                i++;
            if(j-i+1<len||j-i+1==len&&s.substr(i, j-i+1) < str)
            {
                
                str=s.substr(i,j-i+1);
                len = j-i+1;
            }
            }
            j++;
        }
      
        return str;
    }
};