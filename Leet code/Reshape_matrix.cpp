class Solution {
    public:
        vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
            int m = mat.size();
            int n = mat[0].size();
            
            // If reshape is not possible, return the original matrix
            if (m * n != r * c) return mat;
            
            vector<vector<int>> ans(r, vector<int>(c));  // Initialize reshaped matrix
            
            int a_i = 0, a_j = 0;  // Indices for the reshaped matrix
            for (int i = 0; i < m; i++) {
                for (int j = 0; j < n; j++) {
                    ans[a_i][a_j] = mat[i][j];  // Assign element to reshaped matrix
                    a_j++;  // Move to the next column in the reshaped matrix
                    
                    if (a_j == c) {  // If a_j exceeds the number of columns, reset it and move to the next row
                        a_j = 0;
                        a_i++;
                    }
                }
            }
            
            return ans;  // Return the reshaped matrix
        }
    };
    