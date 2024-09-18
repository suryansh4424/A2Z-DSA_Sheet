int func(vector<int>& arr,int n, int mid){
    int student = 1, pagesstu = 0;
    for(int i=0; i<n; i++){
        if(pagesstu + arr[i] <= mid){
            pagesstu += arr[i];
        }
        else{
        student++;
        pagesstu = arr[i];
        }
    }
    return student;
}
int findPages(vector<int> &arr, int n, int m) {
    if (m>n) return -1;
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);

    while(low <= high){
        int mid  = (low+high)/2;
        int numofstudents = func(arr,n,mid);
        if(numofstudents > m){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
    }
    return low;
}
