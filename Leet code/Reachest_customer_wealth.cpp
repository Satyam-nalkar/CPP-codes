class Solution {
    public:
        int maximumWealth(vector<vector<int>>& accounts) {
            int r = accounts.size();
           int m=0;
           for(int i=0;i<r;i++)
           {
            int rM=0;
             int c = accounts[i].size();
            for(int j=0;j<c;j++){
                rM += accounts[i][j];
            }
            m=max(m,rM);
           } 
           return m;
        }
    };