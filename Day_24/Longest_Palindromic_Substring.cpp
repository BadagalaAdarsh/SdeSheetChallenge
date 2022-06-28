#include <bits/stdc++.h>
string longestPalinSubstring(string s){
    int n=s.size();
    int len=-1;
    int idx=-1;
    vector<vector<bool>>dp(n,vector<bool>(n,0));
    for(int g=0;g<n;g++){
        for(int i=0,j=g;j<n;i++,j++){
            if(g==0)dp[i][j]=1;
            else if(g==1)dp[i][j]=(s[i]==s[j]);
            else {
                dp[i][j]=((s[i]==s[j]) && (dp[i+1][j-1]));
            }
            if(dp[i][j] && len<(g+1)){
                len=g+1;
                idx=i;
            }
        }
    }
    return s.substr(idx,len);
}
