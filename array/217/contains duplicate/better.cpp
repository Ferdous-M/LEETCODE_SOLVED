class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size() - 1; i++) {

            if (nums[i] == nums[i + 1]) {
                return true;
                break;
            }
        }
        return false;
    }
};

// Time & Space Complexity
// Time complexity: O(nlogn)
// Space complexity: O(1) or O(n) depending on the sorting algorithm.
