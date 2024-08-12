#include<bits/stdc++.h>
int days(vector<int> &weights, int cap){
    int n = weights.size();
    int cntdays = 1, load = 0;
    for(int i=0; i<n; i++){
        if((load + weights[i]) > cap){
            cntdays += 1;
            load = weights[i];
        }
        else{
            load += weights[i];
        }
    }
    return cntdays;
}

int leastWeightCapacity(vector<int> &weights, int d) {
    int maxi = *max_element(weights.begin(), weights.end());
    int sum = accumulate(weights.begin(), weights.end(),0);

    for(int i=maxi; i<=sum; i++){
        if(days(weights,i) <= d){
            return i;
        }
    }
    return -1;
}
