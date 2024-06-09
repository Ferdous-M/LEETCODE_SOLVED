class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        //if(i==0 || i==nums.size()-1)return i;
        if(nums.size()==1)return 0;
        for(int i=0;i<nums.size();i++){
            if((i==0 || nums[i]>nums[i-1]) && (i==nums.size()-1 || nums[i]>nums[i+1])){
                return i;
            }
        }
        return -1;
        
    }
};
