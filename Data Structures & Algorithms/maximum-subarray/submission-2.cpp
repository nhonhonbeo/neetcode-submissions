class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int max_Sum = nums[0];
        int cur_Sum = nums[0];
        for(int i = 1; i<nums.size(); i++){
            cur_Sum = max(nums[i], cur_Sum + nums[i]);
            max_Sum = max(cur_Sum, max_Sum);
        }
        return max_Sum;
    }
};
