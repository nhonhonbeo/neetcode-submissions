class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> res;
        int left = 0, right = n-1;
        while(left<right){
            if(nums[left]+nums[right] == target){
                res.push_back(left+1);
                res.push_back(right+1);
                return res;
            }
            else if(nums[left] + nums[right] < target) ++left;
            else if(nums[left] + nums[right] > target) --right;
        }
        return {};
    }
};
// 1 2 3 4 5 6 target = 5