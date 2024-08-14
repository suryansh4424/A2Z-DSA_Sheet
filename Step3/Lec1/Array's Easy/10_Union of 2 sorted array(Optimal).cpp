#include <bits/stdc++.h>
vector<int> sortedArray(vector<int> a, vector<int> b){
    int i=0; int j=0;
    int n1 = a.size();
    int n2 = b.size();
    vector<int> unionarr;
    while(i<n1 && j<n2){
      if(a[i] <= b[j]){
          if(unionarr.size() == 0 || unionarr.back() != a[i]){
              unionarr.push_back(a[i]);
          }
          i++;
      } 
      else{
          if(unionarr.size() == 0 || unionarr.back() != b[j]){
              unionarr.push_back(b[j]);
          }
          j++;
      }
    }
    while(i<n1){
        if(unionarr.back() != a[i]){
              unionarr.push_back(a[i]);
          }
          i++;
    }
    while(j<n2){
        if(unionarr.back() != b[j]){
              unionarr.push_back(b[j]);
          }
          j++;
    }
    return unionarr;
}
