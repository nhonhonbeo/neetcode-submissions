class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> used;
        for(int i = 0; i<nums.size(); i++){
            if(used.count(nums[i])){
                return true;
            }
            used.insert(nums[i]);
        }
        return false;
    }
};