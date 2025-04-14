class Solution {
    public:
        vector<vector<int>> transpose(vector<vector<int>>& matrix) {
            int r = matrix.size();
            int c = matrix[0].size();
            
            vector<vector<int>> ans(c, vector<int>(r));  // Transposed matrix will have swapped dimensions
            
            for (int i = 0; i < r; i++) {
                for (int j = 0; j < c; j++) {
                    ans[j][i] = matrix[i][j];  // Transpose the matrix
                }
            }
            
            return ans;
        }
    };