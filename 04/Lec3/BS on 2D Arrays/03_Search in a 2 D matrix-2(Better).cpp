bool BS(vector<int> &MATRIX, int target){
    int n = MATRIX.size();
    int low = 0, high = n-1;
    while(low <= high){
        int mid = (low+high)/2;
        if(MATRIX[mid] == target){
            return true;
        }
        else if(MATRIX[mid] > target){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return false;
}

bool searchElement(vector<vector<int>> &MATRIX, int target) {
    int n = MATRIX.size();
    for (int i = 0; i < n; i++) {
        bool flag =  BS(MATRIX[i], target);
        if (flag) return true;
    }
  return false;
}
