class Solution {
    public:
        bool isValid(string s) {
            stack<char>stk;
            for(char e:s){
            if(e=='c')
            {
                if(stk.size()<2 || stk.top() != 'b')return false;
                stk.pop();
                if(stk.top() != 'a')return false;
                stk.pop();
            }
            else
            {
                stk.push(e);
                
            }
        }
             return stk.empty();
        }
    };