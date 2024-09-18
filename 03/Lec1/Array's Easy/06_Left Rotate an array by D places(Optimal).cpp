#include <bits/stdc++.h>
using namespace std;

void leftrotateArray(vector<int>& arr, int k) {
    int n = arr.size();
    if (n == 0) return;
    k = k % n;
    if (k == 0) return;

    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());
}

vector<int> rotateArray(vector<int> arr, int k) {
    leftrotateArray(arr, k);
    return arr;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
    int k = 2;
    vector<int> rotated = rotateArray(arr, k);
    for (int num : rotated) {
        cout << num << " ";
    }
    return 0;
}

//OR

// #include <iostream>
// #include <vector>
// using namespace std;

// void reverse(vector<int>& arr, int start, int end) {
//     while (start < end) {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }

// void leftrotateArray(vector<int>& arr, int k) {
//     int n = arr.size();
//     if (n == 0) return;
//     k = k % n;
//     if (k == 0) return;

//     reverse(arr, 0, k-1);
//     reverse(arr, k, n-1);
//     reverse(arr, 0, n-1);
// }

// vector<int> rotateArray(vector<int> arr, int k) {
//     leftrotateArray(arr, k);
//     return arr;
// }

// int main() {
//     vector<int> arr = {1, 2, 3, 4, 5, 6, 7};
//     int k = 2;
//     vector<int> rotated = rotateArray(arr, k);
//     for (int num : rotated) {
//         cout << num << " ";
//     }
//     return 0;
// }
