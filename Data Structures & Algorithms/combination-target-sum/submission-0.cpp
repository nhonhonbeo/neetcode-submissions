class Solution {
public:
    vector<int>numset;
    vector<vector<int>>res;
    int sum = 0;
    void backtrack(int i, vector<int>nums, int target){
        if(sum == target){
            res.push_back(numset);
            return;
        } 
        if(sum>target || i>=nums.size()){
            return;
        }
        sum+=nums[i];
        numset.push_back(nums[i]);
        backtrack(i, nums, target);
        
        sum -= nums[i];
        numset.pop_back();

        backtrack(i+1, nums, target);
    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        backtrack(0, nums, target);
        return res;
    }
};
