class Solution {
public:
    int findMin(vector<int>& nums) {

        int low = 0, high = nums.size() - 1, mid, mn = INT_MAX;
        while (low <= high) {
            mid = (low + high) / 2;

            if (nums[low] <= nums[mid]) {
                mn = min(mn, nums[low]);
                low = mid + 1;
            } else {
                mn = min(mn, nums[mid]);
                high = mid - 1;
            }
        }
        return mn;
    }
};
