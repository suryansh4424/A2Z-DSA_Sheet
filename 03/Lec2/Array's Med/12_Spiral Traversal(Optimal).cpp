#include<bits/stdc++.h>
vector<int> spiralMatrix(vector<vector<int>>&MATRIX) {
    int n = MATRIX.size();
    int m = MATRIX[0].size();
    int left = 0;
    int top = 0;
    int right = m-1;
    int bottom = n-1;
    vector<int> ans;
    while(top <= bottom && left <= right){
        for(int i=left; i<=right; i++){
            ans.push_back(MATRIX[top][i]);
        }
        top++;
        for(int i=top; i<=bottom; i++){
            ans.push_back(MATRIX[i][right]);
        }
        right--;
        if(top <= bottom){
            for(int i=right; i>=left; i--){
            ans.push_back(MATRIX[bottom][i]);
            }
            bottom--;
        }
        if(left <= right){
            for(int i=bottom; i>=top; i--){
            ans.push_back(MATRIX[i][left]);
            }
            left++;
        }
    }
    return ans;
}
