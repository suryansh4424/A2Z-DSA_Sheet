long long maxSubarraySum(vector<int> arr, int n) {
    long long maxi = LONG_MIN;
    for (int i = 0; i < n; i++) {
        long long sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum < 0) {
                sum = 0;
            }
            maxi = max(sum, maxi);
        }
    }
    return maxi;
}
