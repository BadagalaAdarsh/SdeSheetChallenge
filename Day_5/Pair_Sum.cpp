#include <bits/stdc++.h> 
vector<vector<int>> pairSum(vector<int> &arr, int s){
   // Write your code here.
    
    sort(arr.begin(), arr.end());
    vector<vector<int>> answer;
    
    for(int i = 0; i < (int)arr.size(); i++){
        for(int j = i + 1; j < (int)arr.size(); j++){
            if( arr[i] + arr[j] == s) {
                
                answer.push_back({arr[i], arr[j]});
            }
        }
    }
    
    return answer;
}
