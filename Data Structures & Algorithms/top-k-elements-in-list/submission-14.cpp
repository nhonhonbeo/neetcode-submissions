class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int maxnum = 1;
        unordered_map<int,int> val;
        for(int i = 0; i<nums.size(); i++){
            val[nums[i]]++;
        }
        vector<pair<int, int>> freq;
        for(auto &p : val){
            freq.push_back({p.second, p.first});
        }
        sort(freq.begin(), freq.end());
        vector<int> res;
        for(auto &p : freq){
            res.push_back({p.second});
            if(res.size()>k) res.erase(res.begin());
        }
        return res;
    }
};
