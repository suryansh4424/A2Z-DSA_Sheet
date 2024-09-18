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
        max_platforms = max(max_platforms, platform_needed);
    }
    
    return max_platforms;
}


link = "https://www.naukri.com/code360/problems/minimum-number-of-platforms_799400?leftPanelTabValue=SUBMISSION"
