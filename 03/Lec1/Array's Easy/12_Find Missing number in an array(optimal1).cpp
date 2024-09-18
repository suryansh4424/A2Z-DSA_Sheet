int missingNumber(vector<int> &a, int N) {
    int Expectedsum = (N*(N+1))/2;
    int Givensum = 0;

    for(int i=0; i<a.size(); i++){
        Givensum += a[i];
    }
    return Expectedsum - Givensum;
}
