vector<int> alternateNumbers(vector<int>&a) {
    int n = a.size();
    vector<int> ans(n,0);
    int posindex = 0;
    int negindex = 1;
    for(int i=0; i<n; i++){
        if(a[i] < 0){
            ans[negindex] = a[i];
            negindex += 2;
        }
        else{
            ans[posindex] = a[i];
            posindex += 2;
        }
    }
    return ans;
}
