class Solution {
public:
    int scoreOfParentheses(string s) {
        int n = s.length();
        stack<int> st;
        st.push(0);
        int inside=0;
        int score = 0;
        for (int i = 0; i < n; i++) {
            if(s[i]=='('){
                st.push(0);
            }
            else
            {
                 int inside = st.top();
                st.pop();
                int score;
                if (inside == 0)
                    score = 1; 
                else
                    score = 2 * inside; 
                st.top() += score;
            }
        }
        return st.top();
    }
};