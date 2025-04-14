class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
      int ans =0;
      int sz1=nums1.size();
      int sz2= nums2.size();
      int ans1 = 0,ans2 = 0;
      if(sz1 % 2)
      for(int i=0; i<sz2; i++)
      {
        ans1 ^=nums2[i];
      }   
      if(sz2 % 2)
       for(int i=0; i<sz1; i++)
       ans2 ^=nums1[i];
       return ans1^ans2;
    }

};