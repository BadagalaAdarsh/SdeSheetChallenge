#include<bits/stdc++.h>

void fun(int i, vector<int> arr, vector<int>& subset, vector<vector<int>>& answer) {
    if(i == arr.size()) {
        answer.push_back(subset);
        return;
    }
    
    subset.push_back(arr[i]);
    fun(i + 1, arr, subset, answer);
    subset.pop_back();
    
    while(i + 1 < arr.size() && arr[i] == arr[i +1]) i++;
    fun(i + 1, arr, subset, answer);
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    
    sort(arr.begin(), arr.end());
    vector<vector<int>> answer;
    vector<int> subset;
    
    fun(0, arr, subset, answer);
    sort(answer.begin(), answer.end());
    return answer;
}
