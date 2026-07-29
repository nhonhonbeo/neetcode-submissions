class Solution {
public:
    vector<int>numset;
    vector<vector<int>>res;
    vector<bool>visited;
    void backtrack(vector<int>& nums){
        if(numset.size() == nums.size()){
            res.push_back(numset);
            return;
        }
        for(int i = 0; i<nums.size(); i++){
            if(visited[i]) continue;
            visited[i] = true;
            numset.push_back(nums[i]);
            backtrack(nums);
            
            numset.pop_back();
            visited[i] = false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        visited.assign(nums.size(), false);
        backtrack(nums);
        return res;
    }
};
