#include<bits/stdc++.h>
int dp[101][10001];
int func(int e , int f)
{
    if(f==1 || f==0)
        return f;

    if(e==1)
        return f;

    if(dp[e][f]!=-1)
       return dp[e][f];

   int ans=INT_MAX ; 
   int l=1;
   int h=f;

   while(l<=h)
   {
       int mid = (l + (h-l)/2);
       int go_below=func(e-1 , mid-1);
       int go_above=func(e , f-mid);

       int temp = 1+max(go_above,go_below);

       if(go_above>go_below)
           l=mid+1;

       else
           h=mid-1;

       ans = min(ans , temp);
   }
   return dp[e][f]=ans;
}


int cutLogs(int k, int n)
{
    memset(dp , -1 , sizeof(dp));
    return func(k,n);
}
