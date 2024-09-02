#include <vector>   
#include <algorithm>
#include <iostream>
using namespace std;

int findContentChildren(vector<int>& greed, vector<int>& cookieSize){
  int n = greed.suze();
  int m = cookieSize.size();

  sort(greed.begin(), gree.end());
  sort(cookieSize.begin(), cookieSize.end());

  int l = 0, r = 0;
  while(l<m && r<n){
    if(greed[r] <= cookieSize[l]){
      r++;
    }
    l++;
  }
  return r;
}

int main() {
    vector<int> greed = {1, 5, 3, 3, 4};
    vector<int> cookieSize = {4, 2, 1, 2, 1, 3};
    
    cout << "Array Representing Greed: ";
    for(int i = 0; i < greed.size(); i++){
        cout << greed[i] << " ";
    }
    cout << endl;
    cout << "Array Representing Cookie Size: ";
    for(int i = 0; i < cookieSize.size(); i++){
        cout << cookieSize[i] << " ";
    }
    
    int ans = findContentChildren(greed, cookieSize);
    
    cout << endl << "No. of kids assigned cookies "<< ans;
    cout << endl;

    return 0;
}
