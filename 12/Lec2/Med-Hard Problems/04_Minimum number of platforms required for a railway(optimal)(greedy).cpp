#include <bits/stdc++.h> 
int calculateMinPatforms(int at[], int dt[], int n) {
    sort(at, at + n);
    sort(dt, dt + n);
    
    int platform_needed = 0;
    int max_platforms = 0;
    
    int i = 0, j = 0;
    
    while (i < n && j < n) {
        if (at[i] <= dt[j]) {
            platform_needed++;
            i++;
        } 
        else {
            platform_needed--;
            j++;
        }
        max_platforms = std::max(max_platforms, platform_needed);
    }
    
    return max_platforms;
}
