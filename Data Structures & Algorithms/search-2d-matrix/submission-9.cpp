class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int high = 0, low = n-1;
        while(high <= low){
            int mid_row = (low+high)/2;
            if(target >= matrix[mid_row][0] && target <= matrix[mid_row][m-1]){
                int left = 0, right = m-1;
                while(left <= right){
                    int mid = (right + left)/2;
                    if(target == matrix[mid_row][mid]) return true;
                    else if(target > matrix[mid_row][mid]) left = mid+1;
                    else if(target < matrix[mid_row][mid]) right = mid-1;       
                }
                return false;
            }
            else if(target < matrix[mid_row][0]) low = mid_row-1;
            else high = mid_row+1;
        }
        return false;
    }
};