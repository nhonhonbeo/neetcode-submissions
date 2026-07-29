class Solution {
public:
    vector<int>numset;
    vector<vector<int>>res;
    void backtrack(int i, vector<int>& nums, int target){
        if(target == 0){
            res.push_back(numset);
            return;
        }
        if(target < 0 || i>=nums.size()) return;
        numset.push_back(nums[i]);
        target-=nums[i];
        backtrack(i+1, nums, target);

        numset.pop_back();
        target+=nums[i];
        while(i+1<nums.size() && nums[i] == nums[i+1]) i++;
        backtrack(i+1, nums,target);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        backtrack(0, candidates, target);
        return res;
    }
};
