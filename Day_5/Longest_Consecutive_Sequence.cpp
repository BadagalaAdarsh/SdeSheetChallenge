#include <bits/stdc++.h> 
int lengthOfLongestConsecutiveSequence(vector<int> &arr, int n) {
    // Write your code here.
    
    int len = 0, result = INT_MIN;
    if (n == 0) return 0;
    
    unordered_map<int, int> mp;
    for(int i = 0; i < n; i++) mp[arr[i]]++;
    
    for(auto i: arr) {
        if(mp.find(i - 1) == mp.end()) {
            int k = i;
            int len = 1;
            
            while(mp.find(k + 1) != mp.end()) {
                k++;
                len++;
            }
            
            result = max(result, len);
        }
    }
    
    return result > 0 ? result : 1;
}
