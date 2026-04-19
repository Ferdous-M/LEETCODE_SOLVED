class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;
    }
};


Time complexity: O(n log n + m log m)

Space complexity:
O(1) — if using in-place sorting (e.g., heap sort)
O(n + m) — if using non in-place sorting (e.g., merge sort / Timsort)
