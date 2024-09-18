#include<bits/stdc++.h>
vector<int> superiorElements(vector<int>&a) {
    vector<int> ans;
    for (int i = 0; i < a.size(); i++) {
    bool leader = true;
    for (int j = i + 1; j < a.size(); j++)
      if (a[j] > a[i]) {
        leader = false;
        break;
      }
    if (leader)
    ans.push_back(a[i]);
  }
  return ans;
}
