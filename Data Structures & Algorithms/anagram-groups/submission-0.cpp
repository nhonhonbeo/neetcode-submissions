class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.empty()) return {};
        unordered_map<string, vector<string>> cnt;
        for(string s : strs){
            int count[26] = {0};
            for(char c : s){
                count[c - 'a']++;
            }
            string key;
            for(int i = 0; i<26; i++){
                key += '#';
                key += to_string(count[i]);
            }
            cnt[key].push_back(s);
        }
        vector<vector<string>> res;
        for(auto& ana:cnt){
            res.push_back(ana.second);
        }
        return res;
    }
};