class Solution {
public:
    void backtrack(int n, int open, int close, vector<string>& res, string& st){
        if(open == close && open == n){
            res.push_back(st);
            return;
        }
        if(open < n){
            st += '(';
            backtrack(n, open + 1, close, res, st);
            st.pop_back();
        }
        if(close < open){
            st += ')';
            backtrack(n, open, close+1,res, st);
            st.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string st;
        backtrack(n, 0, 0, res, st);
        return res;
    }
};
