#include<bits/stdc++.h>
int calculateMinPatforms(int at[], int dt[], int n) {
    // Write your code here.
    sort(at,at+n);
    sort(dt,dt+n);
    int platform=1,ans=1,i=1,j=0;
    while(i<n && j<n){
        if(at[i]<=dt[j]){
            platform++;
            i++;
        }
        else if(at[i]>dt[j]){
            platform--;
            j++;
        }
        if(platform>=ans)
            ans=platform;
    }
    return ans;
}
