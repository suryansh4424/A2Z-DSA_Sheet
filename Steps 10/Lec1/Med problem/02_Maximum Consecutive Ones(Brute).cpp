int longestSubSeg(vector<int> &arr , int n, int k){
    int maxlen = 0;
    for(int i=0; i<n; i++){
        int zeros = 0;
        for(int j=i; j<n; j++){
            if(arr[j] == 0){
                zeros++;
            }
            if(zeros<=k){
                int len = j-i+1;
                maxlen = max(len,maxlen);
            }
        }
    }
    return maxlen;
}
