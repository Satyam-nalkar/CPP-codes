class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int sz = s.size();
        unordered_set<char> st;
        int left = 0, right = 0, ans = 0;

        while (right < sz) {
            if (!st.count(s[right])) {
                st.insert(s[right]);           // Add the character to the set
                ans = max(ans, right - left + 1); // Update the maximum length
                right++;                       // Expand the window
            } else {
                st.erase(s[left]);             // Remove the leftmost character
                left++;                        // Shrink the window
            }
        }

        return ans;
    }
};
