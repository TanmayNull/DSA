class Solution {
public:
    bool isPalindrome(string a){
        int n = a.length();
       int i=0;
       int j=n-1;
       while(i<=j){
        if(a[i]!=a[j])
        return false;
        i++;
        j--;
       }
       return true;
    }
    void recursive(string s,vector<string>&arr,int n,int ind,string temp,vector<vector<string>>&ans){
        if(ind>=n){
            ans.push_back(arr);
            return;
        }
        for(int i=ind;i<n;i++){
            temp = s.substr(ind,i-ind+1);
            if(isPalindrome(temp)){
            arr.push_back(temp);
            recursive(s,arr,n,i+1,temp,ans);
            arr.pop_back();
   }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>arr;
        int n =s.length();
        recursive(s,arr,n,0,"",ans);
        return ans;
    }
};