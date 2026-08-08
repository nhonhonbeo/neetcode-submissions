class Solution {
public:
    bool check(string x, string y, int l, int r){
        string temp = y.substr(l, r - l + 1);
        sort(temp.begin(), temp.end());
        sort(x.begin(), x.end());
        if (x == temp) return true;
        return false;
    }
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        bool kt =  false;
        for(int i = 0; i < m; i++){
                kt = check(s1, s2, i, i + n - 1);
                if (kt==true) break;
            } 
        return kt;
    }
};