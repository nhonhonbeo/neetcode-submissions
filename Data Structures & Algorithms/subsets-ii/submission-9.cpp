class Solution {
public:
    vector<vector<int>>res;
    void backtrack(int i, vector<int>&nums, vector<int>subset){
        if(i == nums.size()){
            res.push_back(subset);
            return;
        }
        subset.push_back(nums[i]);
        backtrack(i+1, nums, subset);
        subset.pop_back();

        while(i+1 < nums.size() && nums[i] == nums[i+1]){
            i++;
        }
        backtrack(i+1, nums, subset);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        backtrack(0, nums, {});
        return res;
    }
};
