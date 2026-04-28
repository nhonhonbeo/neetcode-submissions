class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        unordered_map<char, int> lettercount;
        for(char c : s){
            lettercount[c]++;
        }
        for(char c : t){
            if(--lettercount[c] < 0) return false;
        }
        return true;
    }
};
