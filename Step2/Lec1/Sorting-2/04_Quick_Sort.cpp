#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
    int pivot = arr[low];
    int i = low + 1;
    int j = high;

    while (true) {
        while (i <= high && arr[i] <= pivot) {
            i++;
        }
        while (j >= low && arr[j] > pivot) {
            j--;
        }
        if (i < j) {
            swap(arr[i], arr[j]);
        } else {
            break;
        }
    }
    swap(arr[low], arr[j]);
    return j;
}

void quick_sort(vector<int> &arr, int low, int high) {
    if (low < high) {
        int pIndex = partition(arr, low, high);
        quick_sort(arr, low, pIndex - 1);
        quick_sort(arr, pIndex + 1, high);
    }
}

vector<int> quickSort(vector<int> arr) {
    quick_sort(arr, 0, arr.size() - 1);
    return arr;
}

int main() {
    int N;
    cout << "Number of elements: ";
    cin >> N;

    vector<int> arr(N);
    cout << "Enter " << N << " elements:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    vector<int> sortedArr = quickSort(arr);

    cout << "Sorted elements: ";
    for (int i : sortedArr) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
