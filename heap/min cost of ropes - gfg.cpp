class Solution {
public:
    long long minCost(vector<int>& arr) {
        if (arr.size() <= 1) return 0;

        priority_queue<long long, vector<long long>, greater<long long>> pq;

        for (int x : arr)
            pq.push(x);

        long long total = 0;

        while (pq.size() > 1) {
            long long a = pq.top(); pq.pop();
            long long b = pq.top(); pq.pop();
            long long sum = a + b;
            total += sum;
            pq.push(sum);
        }

        return total;
    }
};
