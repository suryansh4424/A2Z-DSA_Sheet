#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n, int d){
    if(n==0) return;
    d = d%n;
    
    if(d==0) return;
    
    int temp[d];
    for(int i=0; i<d; i++){
        temp[i] = arr[i];
    }
    for(int i=d; i<n; i++){
        arr[i-d] = arr[i];
    }
    for(int i = n-d; i<n; i++){
        arr[i] = temp[i-(n-d)];
    }
}

int main() {
    int n;
    cout << "Size of array = ";
    cin >> n;
    int arr[n];
    cout << "Fill the array of size " << n << endl;
    for(int i=0; i<n; i++)cin >> arr[i];
    int d;
    cout << "Give shifting value :";
    cin >> d;
    leftRotate(arr,n,d);
    cout << "Shifted array:" << endl;
    for(int i = 0; i<n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
