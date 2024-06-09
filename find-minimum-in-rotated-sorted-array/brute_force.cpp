https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/
TC : O(N), SC: O(1)
  
class Solution {
public:
    int findMin(vector<int>& nums) {

        int mn=10e6;
        for(int i=0; i<nums.size(); i++){
            mn=min(mn,nums[i]);   
        }
        return mn;
    }
};
