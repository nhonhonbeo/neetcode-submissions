class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int l = 0, r = n-1;
        int max_volume = 0;
        while(l <= r){
            int volume;
            if(heights[l]<heights[r]) volume = heights[l]*(r-l);
            else volume = heights[r]*(r-l);
            if(volume > max_volume) max_volume = volume;
            else{
                if(heights[l]<heights[r]) l++;
                else r--;
            }
        }
        return max_volume;
    }
};
