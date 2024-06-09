https://leetcode.com/problems/search-in-rotated-sorted-array-ii/

brute force: TC = O(N), Space complexity = O(1)


bool searchInARotatedSortedArrayII(vector<int>&arr, int k) {
    int n = arr.size(); // size of the array.
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) return true;
    }
    return false;
}
