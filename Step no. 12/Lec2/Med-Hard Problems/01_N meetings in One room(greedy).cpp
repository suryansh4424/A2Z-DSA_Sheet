struct meeting {
    int start;
    int end;
    int pos;
};

bool comp(struct meeting m1, struct meeting m2) {
    if (m1.end < m2.end) return true;
    else if (m1.end > m2.end) return false;
    else if (m1.pos < m2.pos) return true;
    return false;
}

int maximumMeetings(vector<int> &start, vector<int> &end) {
    int n = start.size();
    vector<meeting> meet(n);
    
    for (int i = 0; i < n; i++) {
        meet[i].start = start[i];
        meet[i].end = end[i];
        meet[i].pos = i + 1;
    }
    
    sort(meet.begin(), meet.end(), comp);
    int limit = meet[0].end;
    int count = 1; 
    for (int i = 1; i < n; i++) {
        if (meet[i].start > limit) {
            limit = meet[i].end;
            count++;
        }
    }
    return count;
}


link = ' https://www.naukri.com/code360/problems/maximum-meetings_1062658 '
