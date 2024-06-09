Problem link:  https://leetcode.com/problems/search-in-rotated-sorted-array


//Optimal:  { Time Complexity = O(logN) , Space complexity : O(1) }
//runtime: 4ms

class Solution 
{
public:
    int search(vector<int>& nums, int target) 
    {
        int low=0, high=nums.size()-1, mid;
        while(low <= high)
        {
            mid = (low+high)>>1; //divide by 2 using  >> (right shift) , equavalent to (low+high)/2
            if(nums[mid] == target)return mid;
            if(nums[low] <= nums[mid])
            {
                if(nums[low]<=target && target<=nums[mid])
                {
                     high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
            else
            {
              if(nums[mid]<=target && target<=nums[high])
              {
               low=mid+1;
              }
              else
              {
                high=mid-1;
              }
            }
        }
            return -1;
        
    }

};
