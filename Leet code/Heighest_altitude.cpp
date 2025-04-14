class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sz = gain.size();
        int alt =0;
        int MAX=0;
        for(int i=0;i<sz;i++)
        {
            alt += gain[i];
            if(alt>MAX)
            MAX=alt;
        }
        return MAX;
    }
};