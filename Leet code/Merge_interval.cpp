#include <iostream>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};  // Handle edge case

        // Sort intervals based on the first element
        sort(intervals.begin(), intervals.end());

        stack<vector<int>> stk;
        stk.push(intervals[0]);  // Push the first interval

        int sz = intervals.size();
        for (int i = 1; i < sz; i++) {
            vector<int> top = stk.top(); // Get the top interval

            // If intervals overlap, merge them
            if (top[1] >= intervals[i][0]) {  
                top[1] = max(top[1], intervals[i][1]); // Update the end time
                stk.pop(); 
                stk.push(top); // Push the updated interval
            } else {
                stk.push(intervals[i]); // No overlap, push the new interval
            }
        }

        // Convert stack to result vector
        vector<vector<int>> ans;
        while (!stk.empty()) {
            ans.push_back(stk.top());
            stk.pop();
        }
        reverse(ans.begin(), ans.end()); // Reverse because we used a stack

        return ans;
    }
};
