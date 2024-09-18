int minJumps(vector<int> &arr,int n) {
    if (arr.size() <= 1) return 0; 
    if (arr[0] == 0) return -1;

    int farthest = 0;
    int current = 0;
    int jumps = 0;

    for (int i = 0; i < n - 1; i++) {
        farthest = max(farthest, i + arr[i]);

        if (i == current) {
            jumps++;
            current = farthest;
            if (current >= n - 1) {
                return jumps;
            }
        }
    }

    return -1;
}
