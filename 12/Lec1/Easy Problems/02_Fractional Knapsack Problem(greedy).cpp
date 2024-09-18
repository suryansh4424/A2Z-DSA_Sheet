#include <bits/stdc++.h>

using namespace std;

struct Item {
   int value;
   int weight;
};
class Solution {
    public:
        bool static comp(Item a, Item b){
            double r1 = (double) a.value/ (double) a.weight;
            double r2 = (double) b.value/ (double) b.weight;
            return r1>r2;
        }
    
    double fractionalKnapsack(int W, Item arr[], int n){
        sort(arr, arr+n, comp);
        int currweight = 0;
        double finalvalue = 0.0;
        for(int i=0; i<n; i++){
            if(currweight + arr[i].weight <= W){
                currweight += arr[i].weight;
                finalvalue += arr[i].value;
            }
            else{
                int remain = W - currweight;
                finalvalue += (arr[i].value/(double) arr[i].weight)*(double) remain;
                break;
            }
        }
        return finalvalue;
    }
};
int main() {
   int n = 3, weight = 50;
   Item arr[n] = { {100,20},{60,10},{120,30} };
   Solution obj;
   double ans = obj.fractionalKnapsack(weight, arr, n);
   cout << "The maximum value is " << setprecision(2) << fixed << ans;
   return 0;
}










Link = ' https://www.naukri.com/code360/problems/fractional-knapsack_975286?leftPanelTabValue=DISCUSS '

#include <bits/stdc++.h> 

static bool comp(pair<int, int> a, pair<int, int> b) {
    double r1 = (double) a.second / (double) a.first;
    double r2 = (double) b.second / (double) b.first;
    return r1 > r2;
}

double maximumValue(vector<pair<int, int>>& items, int n, int w) {
    sort(items.begin(), items.end(), comp);
    int currWeight = 0;
    double finalValue = 0.0;
    
    for (int i = 0; i < n; i++) {
        if (currWeight + items[i].first <= w) {
            currWeight += items[i].first;
            finalValue += items[i].second;
        } else {
            int remain = w - currWeight;
            finalValue += (items[i].second / (double) items[i].first) * (double) remain;
            break;
        }
    }
    return finalValue;
}
