int missingNumber(vector<int> &a, int N) {
    int hash[N+1] = {0};
    int missingNum = -1;

    for(int i=0;i<N-1;i++) {
        hash[a[i]] = 1;
    }

    for(int i=1;i<=N;i++) {
        if(hash[i] == 0) {
            missingNum = i;
            break;
        }
    }
    return missingNum;
}
