class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0; // Handle the case for an empty array.

        int cnt = 0; // Pointer for the position of unique elements.

        for (int i = 1; i < nums.size(); i++) { // Start from the second element.
            if (nums[i] != nums[cnt]) { // Check if the current element is different from the last unique element.
                cnt++; // Move the pointer for unique elements forward.
                nums[cnt] = nums[i]; // Update the position with the new unique element.
            }
        }

        return cnt + 1; // Return the number of unique elements.
    }
};
