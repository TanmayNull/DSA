class Solution {
public:
    string reverseParentheses(string s) {
        stack<int>st;
        int n = s.length();
        for(int i=0;i<n;i++){
             if(s[i]=='(')
             {
                st.push(i);
             }
             if(s[i]==')'&&!st.empty())
             {
                int j=st.top();
                st.pop();
                reverse(s.begin()+j+1,s.begin()+i);
             }
        }
        s.erase(remove(s.begin(), s.end(), '('), s.end());
        s.erase(remove(s.begin(), s.end(), ')'), s.end());
       return s;
    }
};