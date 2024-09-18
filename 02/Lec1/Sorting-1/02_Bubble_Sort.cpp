#include<bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n){
    for(int i=n-1; i>=0; i--){
        int alreadysorted = 0;
        for(int j =0; j<=i-1; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                int alreadysorted = 1;
            }
        }
        if(alreadysorted == 0){
            break;
        }
    }
}

int main(){
    int n;
    cout << "Number= ";
    cin >> n;
    int arr[n];
    cout << "Array of size " << n <<" :";
    for(int i=0; i<n; i++) cin >> arr[i];
    bubble_sort(arr, n);
    cout<< "Sorted array :" << endl;
    for(int i=0; i<n; i++){
        cout<< arr[i] << " ";
    }
}
