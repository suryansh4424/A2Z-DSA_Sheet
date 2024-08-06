//Brute-
#include<bits/stdc++.h>
int findmax(vector<int>& weights){
    int n = weights.size();
    int maxi = INT_MIN;
    for(int i=0; i<n; i++){
        maxi = max(maxi,weights[i]);
    }
    return maxi;
}

int findsum(vector<int>& weights){
    int n = weights.size();
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += weights[i];
    }
    return sum;
}

int days(vector<int> &weights, int mid, int d){
    int n = weights.size();
    int dayscnt = 1;
    int load = 0;
    for(int i=0; i<n; i++){
        if(load + weights[i] <= mid){
            load += weights[i];
        }
        else{
            dayscnt ++;
            if(dayscnt > d) return dayscnt;
            load = weights[i];
        }
    }
    return dayscnt;
}

int leastWeightCapacity(vector<int> &weights, int d){
    int n = weights.size();
    int maxi = findmax(weights);
    int sum = findsum(weights);

    int low = maxi, high = sum;
    while(low<=high){
        int mid = (low+high)/2;
        if(days(weights,mid,d)<=d){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return low;
}
