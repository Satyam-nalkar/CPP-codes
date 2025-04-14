class Solution {
    public:
        int numJewelsInStones(string jewels, string stones) {
            int cnt = 0;
            unordered_set<char> jewelSet(jewels.begin(), jewels.end());  // Store jewels in a set for O(1) lookup
            
            // Iterate over each stone
            for (char stone : stones) {
                if (jewelSet.count(stone)) {  // If stone is a jewel
                    cnt++;
                }
            }
            
            return cnt;  // Return the final count of jewels in stones
        }
    };
    