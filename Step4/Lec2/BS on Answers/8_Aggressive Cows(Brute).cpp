bool isPossible(vector<int> &stalls, int dist, int k){
    int n = stalls.size();
    int cnt = 1;
    int last = stalls[0];
    for(int i=0; i<n; i++){
        if((stalls[i] - last) >= dist){
            cnt ++;
            last = stalls[i];
        }
    }
    if(cnt >= k){
        return true;
    }
    else{
        return false;
    }
}

int aggressiveCows(vector<int> &stalls, int k){
    sort(stalls.begin(), stalls.end());
    int maxi = *max_element(stalls.begin(), stalls.end());
    int mini = *min_element(stalls.begin(), stalls.end());
    for(int i =0; i<(maxi-mini); i++){
        if(isPossible(stalls, i, k) == true){
            continue;
        }
        else{
            return (i-1);
        }
    }
}
