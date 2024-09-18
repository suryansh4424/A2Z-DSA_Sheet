int findAllSubarraysWithGivenSum(vector<int> &arr, int k) {
    int n = arr.size();
    unordered_map<int, int> mpp;
    mpp[0] = 1;
    int presum = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        presum += arr[i];
        int remove = presum - k;
        if (mpp.find(remove) != mpp.end()) {
            cnt += mpp[remove];
        }
        mpp[presum] += 1;
    }
    return cnt;
}
