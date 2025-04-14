class Solution {
public:
    bool isPalindrome(int x) {
        long long tem_x=x;
        long long ans;
        while(x>0)
        {
          int id = x%10;
              ans=(ans*10)+id;
              x = x/10;
        }
        return (ans==tem_x);
    }
};