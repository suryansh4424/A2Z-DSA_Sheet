#include <bits/stdc++.h>
int majorityElement(vector<int> v) {
  int n = v.size();
  int el;
  int cnt = 0;
  for(int i=0; i<n; i++){
    if(cnt == 0){
      el = v[i];
      cnt = 1;
    }
    else if(v[i] == el){
      cnt++;
    }
    else{
      cnt--;
    }
  }
  
  int cnt1=0;
  for(int i=0; i<n; i++){
    if(v[i] == el){
      cnt1++;
    }
  }
  if(cnt1 > (n/2)){
    return el;
  }
  return -1;
}
