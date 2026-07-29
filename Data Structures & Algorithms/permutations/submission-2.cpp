class Solution {
public:
    vector<int>numset;
    vector<vector<int>>res;
    vector<int>used;
    void backtrack(vector<int>& nums){
        if(numset.size() == nums.size()){
            res.push_back(numset);
            return;
        }
        for(int i = 0; i<nums.size(); i++){
            if(used[i]) continue;
            
            used[i] = 1;
            numset.push_back(nums[i]);
            backtrack(nums);

            numset.pop_back();
            used[i] = 0;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        for(int i = 0; i<nums.size(); i++){
            used.assign(nums.size(), 0);
        }
        backtrack(nums);
        return res;
    }
};
