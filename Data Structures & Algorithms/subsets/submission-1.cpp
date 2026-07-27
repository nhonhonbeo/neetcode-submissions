class Solution {
public:
    vector<vector<int>> res;
    vector<int> subset;
    void backtrack(int i, vector<int>& nums){
        if(i>=nums.size()){
            res.push_back(subset);
            return;
        }
        subset.push_back(nums[i]);
        backtrack(i+1, nums);
        subset.pop_back();
        backtrack(i+1, nums);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        backtrack(0, nums);
        return res;
    }
};
