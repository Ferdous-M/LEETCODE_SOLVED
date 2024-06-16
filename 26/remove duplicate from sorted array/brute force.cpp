class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int n=nums.size();
      set<int>s;
      for(int i=0;i<n;i++){
        s.insert(nums[i]);
      }  
      int k=s.size();
      int j=0;
      for(auto x:s){
        nums[j++]=x;
      }
      return k;
    }
};
