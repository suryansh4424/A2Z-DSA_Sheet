int func(vector<int>& arr,int n, int pages){
    int student = 1, pagesstu = 0;
    for(int i=0; i<n; i++){
        if(pagesstu + arr[i] <= pages){
            pagesstu += arr[i];
        }
        else{
        student++;
        pagesstu = arr[i];
        }
    }
    return student;
}
int findPages(vector<int>& arr, int n, int m) {
    if (m > n) return -1;
    int low = *max_element(arr.begin(), arr.end());
    int high = accumulate(arr.begin(), arr.end(), 0);

    for(int pages = low; pages<= high; pages++){
        int cntstu = func(arr,n,pages);
        if(cntstu == m){
            return pages;
        }
    }
    return low;
}
