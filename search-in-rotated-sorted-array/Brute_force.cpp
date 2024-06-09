Problem link:  https://leetcode.com/problems/search-in-rotated-sorted-array


//Brute Force:  { Time Complexity = O(N) , Space complexity : O(1) }

class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++)
        {
            if(nums[i]==target){
                return i;
            }
        }
        
        return -1;
    }
};


