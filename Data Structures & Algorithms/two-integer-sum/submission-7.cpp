class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> res;
        for(int i = 0; i<nums.size(); i++){
            int need = target - nums[i];
            if(res.count(need)) return {res[need], i};
            res[nums[i]] = i;
        }
        return {};
    }
};
