#include<vector>
void rotateMatrix(vector<vector<int>> &mat) {
    int n = mat.size();
    vector<vector<int>> rotated(n, vector<int>(n, 0));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            rotated[j][n-i-1] = mat[i][j];
        }
    }
    mat = rotated;
}
