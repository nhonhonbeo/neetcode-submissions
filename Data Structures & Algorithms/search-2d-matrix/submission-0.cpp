class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty()) return false;

        int n = matrix.size();
        int m = matrix[0].size();
        
        // Row pointers
        int left = 0, right = n - 1;
        
        while (left <= right) {
            int mid_row = left + (right - left) / 2;

            // Check if target is within the range of this specific row
            if (target >= matrix[mid_row][0] && target <= matrix[mid_row][m - 1]) {
                
                // Now perform the second binary search on this row's columns
                int high = 0, low = m - 1; 
                while (high <= low) {
                    int mid_col = high + (low - high) / 2;
                    
                    if (matrix[mid_row][mid_col] == target) return true;
                    else if (matrix[mid_row][mid_col] < target) high = mid_col + 1;
                    else low = mid_col - 1;
                }
                // If we finished the row search and didn't find it, 
                // it's not in the matrix at all because the rows are sorted.
                return false; 
            }
            // If target is smaller than the row's start, look at previous rows
            else if (target < matrix[mid_row][0]) {
                right = mid_row - 1;
            }
            // If target is larger than the row's end, look at later rows
            else {
                left = mid_row + 1;
            }
        }
        
        return false;
    }
};