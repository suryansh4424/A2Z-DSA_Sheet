#include <bits/stdc++.h>
using namespace std;
int nCr(int n, int r){
    int res = 1;
    for(int i=0; i<r; i++){
        res = res*(n-i);
        res = res/(i+1);
    }
    return res;
}

vector<vector<int>> pascalTriangle(int N) {
    vector<vector<int>> ans;
    for(int row=1; row<=N; row++){
        vector<int> templist;
        for(int col=1; col<=row; col++){
            templist.push_back(nCr(row-1, col-1));
        }
        ans.push_back(templist);
    }
    return ans;
}
