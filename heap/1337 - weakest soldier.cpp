class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        auto cmp = [](pair<int,int>& a, pair<int,int>& b) {
            if (a.first == b.first) return a.second < b.second;
            return a.first < b.first;
        };
        priority_queue<pair<int,int>, vector<pair<int,int>>, decltype(cmp)> pq(cmp);
        for (int i = 0; i < m; i++) {
            int soldiers = 0;
            for (int x : mat[i]) soldiers += x;
            pq.push({soldiers, i});
            if (pq.size() > k) pq.pop();
        }
        vector<int> ans(k);
        for (int i = k - 1; i >= 0; i--) {
            ans[i] = pq.top().second;
            pq.pop();
        }
        return ans;
    }
};
