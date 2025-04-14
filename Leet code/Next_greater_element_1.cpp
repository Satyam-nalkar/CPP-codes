class Solution {
    public:
        vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
          unordered_map<int,int>um;
          stack<int>stk;
          int sz2 = nums2.size();
          for(int i =sz2 -1; i>=0; i--)
          {
             while(!stk.empty() && stk.top()<=nums2[i])
             {
                stk.pop();
             }
                um[nums2[i]] = stk.empty() ? -1 : stk.top();
                stk.push(nums2[i]);
          }
             vector<int>ans;
             for(int nums:nums1){
                ans.push_back(um[nums]);
             }
          
          return ans;
        }
    };