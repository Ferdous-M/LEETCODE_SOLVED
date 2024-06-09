GOT TLE in this code. sad.

  class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int low,high,mid;
        if(n==1)return 0;
        if(nums[0]>nums[1])return 0;
        if(nums[n-1]>nums[n-2])return n-1;
        low=1,high=n-2;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])return mid;
            if(nums[mid]>nums[mid-1]){low=mid+1;}
            if(nums[mid]>nums[mid+1]){high=mid-1;}
        }
        return -1;
        
    }
};


but the below one got accepted. it is a reminder for me that how can a single mistake in a single if-else condition can get you TLE. silly one,but i learnt from my mistake, alhamdulillah


class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int low,high,mid;
        if(n==1)return 0;
        if(nums[0]>nums[1])return 0;
        if(nums[n-1]>nums[n-2])return n-1;
        low=1,high=n-2;
        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]>nums[mid-1] && nums[mid]>nums[mid+1])return mid;
            if(nums[mid]>nums[mid-1]){low=mid+1;}
            else{high=mid-1;}
        }
        return -1;
        
    }
};

TC: O(logN) SC: O(1)
