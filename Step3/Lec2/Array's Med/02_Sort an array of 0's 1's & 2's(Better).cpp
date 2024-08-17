//TC = O(2N) AND SC = O(1)
#include <bits/stdc++.h> 
void sortArray(vector<int>& arr, int n)
{   
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;
    for(int i = 0; i<n; i++){
        if(arr[i] == 0) cnt0++;
        else if(arr[i] == 1) cnt1++;
        else cnt2++;
    }
    for(int i = 0; i< cnt0; i++) arr[i] = 0;
    for(int i = cnt0; i< cnt0 + cnt1; i++) arr[i] = 1;
    for(int i = cnt0 + cnt1; i< n; i++) arr[i] = 2;
}
