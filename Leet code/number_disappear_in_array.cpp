class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int sz = nums.size();
        vector<bool> arr(sz + 1, false); // Create a vector of size `sz + 1` initialized to `false`.

        // Mark the presence of numbers in `nums`.
        for (int i = 0; i < sz; ++i) {
            arr[nums[i]] = true;
        }

        // Collect numbers that are not present in `nums`.
        vector<int> ans;
        for (int i = 1; i <= sz; ++i) {
            if (!arr[i]) {
                ans.push_back(i);
            }
        }
        
        return ans;
    }
};
