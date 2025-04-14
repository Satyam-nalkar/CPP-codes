class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;  // Initialize the result string
        int w1_sz = word1.size();  // Size of word1
        int w2_sz = word2.size();  // Size of word2
        int i = 0;  
        
        while (i < w1_sz || i < w2_sz) {
            if (i < w1_sz)
                ans += word1[i];  // Add character from word1 if within bounds
            if (i < w2_sz)
                ans += word2[i];  // Add character from word2 if within bounds
            i++;
        }
        
        return ans;  // Return the merged string
    }
};
