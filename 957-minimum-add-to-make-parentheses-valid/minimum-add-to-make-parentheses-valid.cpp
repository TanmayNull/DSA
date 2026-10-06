class Solution {
public:
    int minAddToMakeValid(string s) {
        int n = s.length();
        stack<char>st;
        int cnt_right=0;
        int cnt_left=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                st.push(s[i]);
            }
            else
            {
                if(st.empty())
                cnt_right++;
                else{
                    st.pop();
                }
            }
        }
        while(!st.empty())
        {
            cnt_left++;
            st.pop();
        }
        return cnt_right+cnt_left;
    }
};