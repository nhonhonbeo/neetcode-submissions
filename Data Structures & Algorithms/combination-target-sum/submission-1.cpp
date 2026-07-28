class Solution {
public:
    vector<int>numset;
    vector<vector<int>>res;
    void backtrack(int i, vector<int>nums, int target){
        if(target == 0){
            res.push_back(numset);
            return;
        }
        if(i>=nums.size() || target<0) return;
        numset.push_back(nums[i]);
        target-=nums[i];
        backtrack(i, nums, target);

        numset.pop_back();
        target+=nums[i];
        
        backtrack(i+1, nums, target);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        backtrack(0, nums, target);
        return res;
    }
};
