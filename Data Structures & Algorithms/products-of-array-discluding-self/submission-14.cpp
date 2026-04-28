class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 1);
        int pref = 1;
        int posf = 1;
        for(int i = 0; i<n; i++){
            res[i] = pref;
            pref*=nums[i];
        }
        for(int i = n-1; i>=0; i--){
            res[i] *= posf;
            posf *= nums[i];
        }
        return res;
    }
};
