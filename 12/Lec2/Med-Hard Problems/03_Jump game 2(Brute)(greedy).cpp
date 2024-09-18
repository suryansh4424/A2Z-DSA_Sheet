#include <bits/stdc++.h>
int minimumJumpsUtil(vector<int> &arr, int ind, int n) {
    if (ind >= n - 1) return 0;
    if (arr[ind] == 0) return INT_MAX;
    int mini = INT_MAX;
    for (int i = 1; i <= arr[ind]; i++) {
        int jumps = minimumJumpsUtil(arr, ind + i, n);
        if (jumps != INT_MAX) {
            mini = min(mini, jumps + 1);
        }
    }
    return mini;
}
int minimumJumps(vector<int> &arr, int n) {
    int result = minimumJumpsUtil(arr, 0, n);
    return result == INT_MAX ? -1 : result;
}
