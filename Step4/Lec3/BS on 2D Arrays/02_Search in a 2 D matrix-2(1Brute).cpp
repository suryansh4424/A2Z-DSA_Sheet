bool searchElement(vector<vector<int>> &MATRIX, int target) {
    int n = MATRIX.size();
    int m = MATRIX[0].size();
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(MATRIX[i][j] == target) return true;
        }
    }
    return false;
}
