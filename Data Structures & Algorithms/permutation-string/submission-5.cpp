class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        sort(s1.begin(), s1.end());
        int l = 0, r = 0;
        string temp(s1.size(), 'a');
        while(r < s2.size()){
            if(r - l + 1 == s1.size()){
                for(int i = l; i<=r; i++) temp[i-l] = s2[i];
                sort(temp.begin(), temp.end());
                if(s1 == temp){
                    return true;
                }
            }
            r++;
            if(r-l+1 > s1.size()) l++;
        }
        return false;
    }
};
