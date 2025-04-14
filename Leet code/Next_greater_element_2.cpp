class Solution {
    public:
        vector<int> nextGreaterElements(vector<int>& nums) {
       int sz=nums.size();
       vector<int> ans(sz, -1);
       stack<int>stk;
    
        for(int i= 2*sz-1; i>=0; i--)
        {
            int idx = i%sz;
        
            while(!stk.empty() && stk.top()<=nums[idx]){
           stk.pop();
           }
           if(i<sz)
          ans[idx]=stk.empty() ?-1:stk.top();
          stk.push(nums[idx]);
        }
        return ans;
       }
    };