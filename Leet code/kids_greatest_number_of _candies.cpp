class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n=candies.size();
        vector<bool>ans;
        int maxi=0;
        for(int i=0;i<n;i++){
            maxi=max(candies[i],maxi);
            candies[i]+=extraCandies;
        }
        for(int i=0;i<n;i++){
            if(candies[i]>=maxi){
                ans.push_back(true);
            }else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};