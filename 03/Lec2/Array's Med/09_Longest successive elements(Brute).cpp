bool linearsearch(vector<int>&a, int num){
    int n = a.size();
    for(int i=0; i<n; i++){
        if(a[i] = num){
            return true;
        }
    }
    return false;
}

int longestSuccessiveElements(vector<int>&a) {
    int longest = 1;
    int n = a.size();
    for(int i=0; i<n; i++){
        int x = a[i];
        int cnt = 1;

        while(linearsearch(a, x+1) == true){
            x += 1;
            cnt += 1;
        }
        longest = max(longest , cnt);
    }
    return longest;
}
