int longestSubarrayWithSumK(vector<int>& a, long long k) {
    int n = a.size();

    int len = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            long long s = 0;
            for (int K = i; K <= j; K++) {
                s += a[K];
            }

            if (s == k)
                len = max(len, j - i + 1);
        }
    }
    return len;
}
