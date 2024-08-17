int longestSuccessiveElements(vector<int> &a) {
    int n = a.size();
    if (n == 0) return 0;
    sort(a.begin(), a.end());
    int last_smallest = INT_MIN;
    int cnt = 0;
    int longest = 1;
    for(int i=0; i<n; i++){
        if(a[i]-1 == last_smallest){
            cnt += 1;
            last_smallest = a[i];
        }
        else if(a[i] != last_smallest){
            cnt = 1;
            last_smallest = a[i];
        }
        longest = max(longest, cnt);
    }
    return longest;
}
