#include<bits/stdc++.h>

void func(int index, int target, vector<int>& arr, int n, vector<int>& temp, vector<vector<int>>& answer) {
    
    if(target == 0) {
        answer.push_back(temp);
        return;
    }
    
    for(int i = index; i < n; i++) {
        if(i > index && arr[i] == arr[i-1]) {
            continue;
        }
        
        if(arr[i] > target) {
            break;
        }
        
        temp.push_back(arr[i]);
        func(i + 1, target - arr[i], arr, n, temp, answer);
        temp.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int> &arr, int n, int target)
{
	// Write your code here.
    sort(arr.begin(), arr.end());
    vector<vector<int>> answer;
    vector<int> temp;
    
    func(0, target, arr, n, temp, answer);
    return answer;
    
}
