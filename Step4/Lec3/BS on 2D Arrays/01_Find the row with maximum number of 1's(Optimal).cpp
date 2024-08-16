int lowerbound(vector<int> &matrix, int n, int x){
    int low = 0, high = n-1;
    int ans = n;
    while(low <= high){
        int mid = (low + high)/2;
        if(matrix[mid] >= x){
            ans = mid;
            high = mid-1;
        }
        else{
            low =  mid+1;
        }
    }
    return ans;
}

int rowWithMax1s(vector<vector<int>> &matrix, int n, int m) {
    int max_cnt = 0;
    int index = -1;
    for(int i=0; i<n; i++){
        int cnt_row = m - lowerbound(matrix[i], m, 1);
        if(cnt_row > max_cnt){
            max_cnt = cnt_row;
            index = i;
        }
    }
    return index;
}
