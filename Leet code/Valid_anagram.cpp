
class Solution {
    public:
        bool isAnagram(string s, string t) {
            if (s.length() != t.length())
             return false; // Early exit if lengths diff
    
            unordered_map<char, int> um;
            
            for (char c : s) {
                um[c]++;
            }
            
            for (char c : t)
            {
                if (um[c] == 0) return false; // If char is not in map or count goes negative
                um[c]--;
            }
            
            return true; // All counts should be zero
        }
    };