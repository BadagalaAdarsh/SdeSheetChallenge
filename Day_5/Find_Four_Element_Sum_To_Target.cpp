#include <bits/stdc++.h> 
string fourSum(vector<int> arr, int target, int n) {
    // Write your code here.
    unordered_map<int, pair<int,int>> mp;
    
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            mp[arr[i] + arr[j]] = {i, j};
        }
    }
    
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            int sum = arr[i] + arr[j];
            
            if(mp.find(target - sum) != mp.end()) {
                pair<int,int> p = mp[target - sum];
                
                if(p.first != i && p.first != j
                  && p.second != i && p.second != j) {
                    return "Yes";
                }
            }
        }
    }
    return "No";
}
