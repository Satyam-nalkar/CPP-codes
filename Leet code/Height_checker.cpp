class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int sz = heights.size(); 
        int ans = 0;
        
        vector<int> expected = heights;
        sort(expected.begin(), expected.end()); 
        
        // Compare heights and expected
        for (int i = 0; i < sz; i++) {
            if (heights[i] != expected[i]) {
                ans++;
            }
        }
        return ans;
    }
};
