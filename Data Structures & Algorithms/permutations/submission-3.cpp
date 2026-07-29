class Solution {
public:
    vector<int>numset;
    vector<vector<int>>res;
    void backtrack(int i, vector<int>& nums){
        if(i == nums.size()){
            res.push_back(nums);
            return;
        }
        for(int j = i; j<nums.size(); j++){
            swap(nums[i], nums[j]);
            backtrack(i+1, nums);
            swap(nums[i], nums[j]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        backtrack(0, nums);
        return res;
    }
};
