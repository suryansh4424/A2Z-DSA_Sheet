int rowWithMax1s(vector<vector<int>> &matrix, int n, int m) {
    int index = -1;
    int maxcnt = 0;
    for(int i=0; i<n; i++){
        int cntrow = 0;
        for(int j=0; j<m; j++){
            cntrow += matrix[i][j];
        }
        if(cntrow > maxcnt){
            maxcnt = cntrow;
            index = i;
        }
    }
    return index;
}
