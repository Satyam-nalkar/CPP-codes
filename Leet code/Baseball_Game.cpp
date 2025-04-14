class Solution {
    public:
        int calPoints(vector<string>& operations) {
            stack<int>stk;
            int ans =0;
            for(auto o:operations){
                if(o=="C" && !stk.empty())
                  stk.pop();
                  else if(o=="D")
                  stk.push(2*stk.top());
                  else if(o=="+")
                {
                    int temp = stk.top();
                    stk.pop();
                    int n = temp + stk.top();
                    stk.push(temp);
                    stk.push(n); 
                }
                else
                stk.push(stoi(o));
            }
            
            while(!stk.empty())
            {
                ans += stk.top();
                stk.pop();
            
            }
            return ans;
        }
    };