int missingK(vector < int > vec, int n, int k) {
    for(int i=0; i<n; i++){
        if(vec[i] <= k){
            k++;
        }
        else{
            break;
        }
    }
    return k;
}
