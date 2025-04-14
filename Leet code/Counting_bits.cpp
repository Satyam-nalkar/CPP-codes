class Solution {
public:
    
    vector<int> countBits(int n) {
        vector<int> b;
        for(int i=0;i<=n;i++)
        b.push_back(__builtin_popcount(i));
        return b;
    }
};