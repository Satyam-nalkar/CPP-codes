class Solution {
    public:
        int numIdenticalPairs(vector<int>& nums) {
            int cnt = 0;
            unordered_map<int, int> umap;  // To store frequency of each number
            
            // Count the frequency of each number in the array
            for (int num : nums) {
                umap[num]++;
            }
            
            // Calculate the number of identical pairs
            for (auto e : umap) {
                int n = e.second;
                cnt += (n * (n - 1)) / 2;  // Number of ways to pick 2 identical elements from n occurrences
            }
            
            return cnt;  // Return the total count of identical pairs
        }
    };
    