class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int j = 0, n = bits.size();
        while(j < n) {
            if(bits[j] && ++j == n - 1) return false;
            j++;
        }
        return true;
    }
};