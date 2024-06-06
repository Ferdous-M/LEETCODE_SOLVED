class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int,int>mp;
        int mx=0,ans;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>mx){
                mx=mp[nums[i]];
                ans = nums[i];
            }
        }
       return ans; 
    }
};
