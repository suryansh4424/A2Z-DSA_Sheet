#include <bits/stdc++.h>
using namespace std;
void mark_row(vector<vector<int>> &matrix, int n, int m, int i){
    for(int j=0; j<m; j++){
        if(matrix[i][j] != 0){
            matrix[i][j] = -1;
        }
    }
}
void mark_col(vector<vector<int>> &matrix, int n, int m, int j){
    for(int i=0; i<n; i++){
        if(matrix[i][j] != 0){
            matrix[i][j] = -1;
        }
    }
}
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j] == 0){
                mark_row(matrix, n, m, i);
                mark_col(matrix, n, m, j);
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(matrix[i][j] == -1){
                matrix[i][j] = 0;
            }
        }
    }
    return matrix;
}

int main() {
    vector<vector<int>> matrix = {{1, 2, 3}, {4, 0, 6}, {7, 8, 9}};
    int n = matrix.size();
    int m = matrix[0].size();

    vector<vector<int>> result = zeroMatrix(matrix, n, m);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
