int lowerBound(vector<int> arr, int n, int x) {
    auto lb = lower_bound(arr.begin(), arr.end(),x);
    return lb-arr.begin();
}
