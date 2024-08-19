#include<bits/stdc++.h>
int lengthOfLongestSubarray(int arr[],int n){
    int maxlen=0;
    unordered_map<int,int> mpp;
    int sum=0;
    for(int i=0; i<n; i++){
        sum += arr[i];
        if(sum == 0){
            maxlen = i+1;
        }
        else if(mpp.find(sum) != mpp.end()){
            maxlen = max(maxlen , i-mpp[sum]);
        }
        else{
            mpp[sum] = i;
        }
    }
    return maxlen;
}
