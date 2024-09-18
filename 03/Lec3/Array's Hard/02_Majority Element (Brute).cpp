vector<int> majorityElement(vector<int> v) {
	vector<int> ls;
    int n = v.size();
    for(int i=0; i<n; i++){
        if(ls.size() == 0 || ls[0] != v[i]){
            int cnt = 0;
            for(int j=0; j<n; j++){
                if(v[j] == v[i]){
                    cnt++;
                }
            }
            if(cnt > (n/3)){
                ls.push_back(v[i]);
            }
            if(ls.size() == 2) break;
        }
    }
    return ls;
}
