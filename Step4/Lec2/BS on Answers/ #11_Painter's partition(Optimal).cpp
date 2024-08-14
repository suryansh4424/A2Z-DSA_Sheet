//same as book allocation
int func(vector<int>& boards, int mid) {
    int n = boards.size();
    int person = 1;
    int wallsperperson = 0;  // Fixed variable name
    for (int i = 0; i < n; i++) {
        if (wallsperperson + boards[i] <= mid) {
            wallsperperson += boards[i];
        } else {
            person++;
            wallsperperson = boards[i];
        }
    }
    return person;
}

int findLargestMinDistance(vector<int> &boards, int k) {
    int low = *max_element(boards.begin(), boards.end()); // At least the largest board
    int high = accumulate(boards.begin(), boards.end(), 0); // Sum of all boards

    while (low <= high) {
        int mid = (high + low) / 2;
        int cntperson = func(boards, mid);
        if (cntperson <= k) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return low;
}
