int longestSubSeg(vector<int> &arr, int n, int k) {
    int left = 0;
    int right = 0;
    int maxlen = 0;
    int zeros = 0;

    while (right < n) {
        if (arr[right] == 0) zeros++;

        while (zeros > k) {
            if (arr[left] == 0) {
                zeros--;
            }
            left++;
        }

        int len = right - left + 1;
        maxlen = max(len, maxlen);

        right++;
    }
    return maxlen;
}
