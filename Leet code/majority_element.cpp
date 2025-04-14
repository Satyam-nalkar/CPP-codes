class Solution {
public:
    int majorityElement(vector<int>& v) {
        int n = v.size();
        int num = -1;   // Candidate for majority element
        int count = 0;  // Counter to track candidate validity

        for (int i = 0; i < n; i++) {
            if (count == 0) {  // If count is zero, pick a new candidate
                num = v[i];
                count++;
            } else if (num != v[i]) {  // If the current element is different, decrement count
                count--;
            } else {  // If the current element matches the candidate, increment count
                count++;
            }
        }
        return num;  // At the end of the loop, `num` is the majority element
    }
};