class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char>st;
        for(int i = 0; i<n; i++){
            char c = s[i];
            if(c == '(' || c == '[' || c == '{') st.push(c);
            else{
                if(st.empty()) return false;
                char open = st.top();
                st.pop();
                if(c == ')' && open != '('||c == ']' && open != '['||c == '}' && open != '{') return false;
            }
        }
        return st.empty();
    }
};
