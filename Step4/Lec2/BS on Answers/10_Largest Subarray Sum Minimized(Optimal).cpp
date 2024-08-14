//same as book allocation
int func(vector<int>& a, int mid) {
    int n = a.size();
    int subarr = 1;
    int elementspersubarr = 0;
    for (int i = 0; i < n; i++) {
        if (elementspersubarr + a[i] <= mid) {
            elementspersubarr += a[i];
        } else {
            subarr++;
            elementspersubarr = a[i];
        }
    }
    return subarr;
}

int largestSubarraySumMinimized(vector<int> a, int k) {
    int low = *max_element(a.begin(), a.end()); 
    int high = accumulate(a.begin(), a.end(), 0); 

    while (low <= high) {
        int mid = (high + low) / 2;
        int cntsubarr = func(a, mid);
        if (cntsubarr <= k) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return low;
}
